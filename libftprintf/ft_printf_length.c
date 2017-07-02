#include "libftprintf.h"
//hh h l ll j z
int     ft_printf_length(t_env *e, char *format)
{
    if (format[e->i + 1] && format[e->i] == 'h' && format[e->i + 1] != 'h')
    {
        ft_putendl("h");
    }
    else if (format[e->i + 1] && format[e->i] == 'h' && format[e->i + 1] == 'h')
    {
        ft_putendl("hh");
    }
    else if (format[e->i + 1] && format[e->i] == 'l' && format[e->i + 1] != 'l')
    {
        ft_putendl("l");
    }
    else if (format[e->i + 1] && format[e->i] == 'l' && format[e->i + 1] == 'l')
    {
        ft_putendl("ll");
    }
    else if (format[e->i] == 'j')
    {
        ft_putendl("j");
    }
    else if (format[e->i] == 'z')
    {
        ft_putendl("z");
    }
    else
        return (-1);
    e->i++;
    return (0);
}