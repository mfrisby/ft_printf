#include "libftprintf.h"
//hh h l ll j z
static int  ft_printf_length2(t_env *e, char *format)
{
    if (format[e->i + 1] && format[e->i] == 'h' && format[e->i + 1] != 'h')
    {
        e->m_h = 1;
        e->i += 1;
    }
    else if (format[e->i + 1] && format[e->i] == 'h' && format[e->i + 1] == 'h')
    {
        e->m_hh = 1;
        e->i += 2;
    }
    else if (format[e->i + 1] && format[e->i] == 'l' && format[e->i + 1] != 'l')
    {
        e->m_l = 1;
        e->i += 1;
    }
    else
        return (0);
    return (1);
}
int         ft_printf_length(t_env *e, char *format)
{
    if (ft_printf_length2(e, format) == 1)
        return (0);
    if (format[e->i + 1] && format[e->i] == 'l' && format[e->i + 1] == 'l')
    {
        e->m_ll = 1;
        e->i += 2;
    }
    else if (format[e->i] == 'j')
    {
        e->m_j = 1;
        e->i += 1;
    }
    else if (format[e->i] == 'z')
    {
        e->m_z = 1;
        e->i += 1;
    }
    else
        return (-1);
    return (0);
}