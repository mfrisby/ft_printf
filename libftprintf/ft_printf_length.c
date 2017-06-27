#include "libftprintf.h"
//hh h l ll j z
int     ft_printf_length(t_env *e, char *format)
{
    if (format[e->i + 1] && format[e->i] == 'h' && format[e->i + 1] == 'h')
    {
        ft_putendl("hh");
    }
    return (0);
}