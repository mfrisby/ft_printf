#include "libftprintf.h"
//hh h l ll j z
int     ft_printf_length(t_env *e, char *format)
{
    if (format[e->i + 1] && format[e->i] == 'h' && format[e->i + 1] == 'h')
    {
        e->i+=2;
    }
    else if (format[e->i + 1] && format[e->i] == 'l' && format[e->i + 1] == 'l')
    {
        e->i+=2;
    }
    else if (format[e->i] == 'j')
    {
        e->i+=1;
    }
    else if (format[e->i] == 'z')
    {
        e->i+=1;
    }
    else
        return (-1);
    return (0);
}