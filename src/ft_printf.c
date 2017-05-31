#include "ft_printf.h"

void ft_printf_init_flags(t_env *e)
{
    //TODO
    //add flags hh h ll l j z ?
	e->flag_plus = 0;
	e->flag_diese = 0;
	e->flag_moins = 0;
	e->flag_space = 0;
	e->flag_zero = 0;
}

void ft_printf_init(t_env *e)
{
	e->i = 0;//index dans string format
	e->size = 0;//nombre de charactere affiche a renvoyer
	e->result = NULL;//string contient la chaine a afficher
	e->nb_arg = 0;
	e->precision = 0;
	//e->type; //string
	e->nb_arg = 0;
    e->lst = ft_lstnew(NULL, 0);
}

int			ft_printf(const char *restrict format, ...)
{
	t_env		e;
	va_list		pa;

    ft_printf_init(&e);
	va_start(pa, format);
    //split by % then each string goes to a t_list lst
    char **split = ft_strsplit(format, '%');
    while (split[e.i])
    {
        ft_lstadd(&e.lst, ft_lstnew(split[e.i], ft_strlen(split[e.i]) + 1));
        e.i++;
    }
	va_end(pa);
	return (e.size);
}