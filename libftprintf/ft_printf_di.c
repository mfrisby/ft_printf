#include "libftprintf.h"

void    ft_printf_di(t_env *e)
{
    char *tmp;
    char *tmp2;

    if (e->m_ll)
        tmp = ft_printf_stoa_base(va_arg(e->pa, long long), 10);
    else if (e->m_l)
        tmp = ft_printf_stoa_base(va_arg(e->pa, long), 10);
    else if (e->m_j)
        tmp = ft_printf_stoa_base(va_arg(e->pa, intmax_t), 10);
    else if (e->m_z)
        tmp = ft_printf_stoa_base(va_arg(e->pa, ssize_t), 10);
    else if (e->m_h)
        tmp = ft_printf_stoa_base((short)va_arg(e->pa, int), 10);
    else if (e->m_hh)
        tmp = ft_printf_stoa_base((char)va_arg(e->pa, int), 10);
    else
        tmp = ft_printf_stoa_base(va_arg(e->pa, int), 10);
    tmp = remove_min(e, tmp);
    e->type = 'd';
    ft_printf_putflags(e, tmp);
    free(tmp);
}