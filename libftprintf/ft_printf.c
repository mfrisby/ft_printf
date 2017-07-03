#include "libftprintf.h"

static void ft_printf_init_flags(t_env *e)
{
    //TODO
    //add flags hh h ll l j z ?
	e->flag_plus = 0;
	e->flag_diese = 0;
	e->flag_moins = 0;
	e->flag_space = 0;
	e->flag_zero = 0;
	e->field_width = 0;
	e->precision = 0;
	e->precision_in_arg = 0;
	e->field_width = 0;
	e->m_h = 0;
	e->m_hh = 0;
	e->m_l = 0;
	e->m_ll = 0;
	e->m_j = 0;
	e->m_z = 0;
	e->neg = 0;
}

static void ft_printf_init(t_env *e)
{
	e->i = 0;//index dans string format
	e->size = 0;//nombre de charactere affiche a renvoyer
	e->index =0;//index buffer
	e->nb_arg = 0;
	ft_bzero(e->result, 4000);
	ft_printf_init_flags(e);
}

static void	ft_printf_add_char(t_env *e, char c)
{
	if (c == '%')
		e->i+=1;
	if (e->index < 4000)
	{
		e->result[e->index] = c;
		e->index+=1;
		e->size+=1;
	}
	e->i++;
}

static void	ft_printf_parse(t_env *e, char *format)
{
	if (format[e->i] == 92)/* backslash */
		ft_printf_special_char(e, format);//do e->i++;
	else if (format[e->i] == '%' && format[e->i + 1])
		ft_printf_modulo(e, format);//do e->i++;s
	else
		e->i+=1;//ignore , no comportement set
}

int			ft_printf(const char *restrict format, ...)
{
	t_env		e;

    ft_printf_init(&e);
	va_start(e.pa, format);
	while (format[e.i] != '\0')
	{
		ft_printf_buffer_flush(&e);
		if ((format[e.i] != '%' && format[e.i] != 92)/* backslash */ ||
			(format[e.i] == '%' && format[e.i+1] && format[e.i+1] == '%'))
			ft_printf_add_char(&e, format[e.i]);
		else
			ft_printf_parse(&e, (char*)format);
		//reinit flags
	}
	ft_putstr(e.result);
	va_end(e.pa);
	return (e.size);
}