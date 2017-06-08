#include "ft_printf.h"

static void ft_printf_init_flags(t_env *e)
{
    //TODO
    //add flags hh h ll l j z ?
	e->flag_plus = 0;
	e->flag_diese = 0;
	e->flag_moins = 0;
	e->flag_space = 0;
	e->flag_zero = 0;
}

static void ft_printf_init(t_env *e)
{
	e->i = 0;//index dans string format
	e->size = 0;//nombre de charactere affiche a renvoyer
	e->nb_arg = 0;
	e->precision = 0;
	//e->type; //string
	e->nb_arg = 0;
	ft_printf_init_flags(e);
}

static void	ft_printf_add_char(t_env *e, char c)
{
	if (c == '%')
		e->i+=1;
	if (e->size < 4000)
	{
		e->result[e->size] = c;
		e->size+=1;
	}
	e->i++;
}

static void	ft_printf_parse(t_env *e, char *format)
{
	if (format[e->i] == 92)
	{
		e->result[e->size] = ft_printf_special_char(e->i, format);
		e->size+=1;/*does \t tab add 4 char to size?*/
	}
	else if (format[e->i] == '%')
	{
		e->result[e->size] = ft_printf_modulo(e->i, format);
		//e->size+=2;
	}
	else
		return;
	e->i+=2;
}

int			ft_printf(const char *restrict format, ...)
{
	t_env		e;
	va_list		pa;

    ft_printf_init(&e);
	va_start(pa, format);
	while (format[e.i] != '\0')
	{
		if (e.size > 3999)/*buffer oversize, show string restart BUFFER*/
		{
			ft_putstr(e.result);
			e.size = 0;
			ft_bzero(e.result, 4000);
		}
		if ((format[e.i] != '%' && format[e.i] != 92) ||
			(format[e.i] == '%' && format[e.i+1] && format[e.i+1] == '%'))
			ft_printf_add_char(&e, format[e.i]);
		else
			ft_printf_parse(&e, (char*)format);
	}
	ft_putstr(e.result);
	va_end(pa);
	return (e.size);
}