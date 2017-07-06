#include "libftprintf.h"

void    ft_printf_x(t_env *e)
{
    char *tmp;

    if (e->m_ll)
        tmp = ft_printf_utoa_base(va_arg(e->pa, unsigned long long), 16);
    else if (e->m_l)
        tmp = ft_printf_utoa_base(va_arg(e->pa, unsigned long), 16);
    else if (e->m_j)
        tmp = ft_printf_utoa_base(va_arg(e->pa, uintmax_t), 16);
    else if (e->m_z)
        tmp = ft_printf_utoa_base(va_arg(e->pa, size_t), 16);
    else if (e->m_h)
        tmp = ft_printf_utoa_base((unsigned short)va_arg(e->pa, unsigned int), 16);
    else if (e->m_hh)
        tmp = ft_printf_utoa_base((unsigned char)va_arg(e->pa, unsigned int), 16);
    else
        tmp = ft_printf_utoa_base(va_arg(e->pa, unsigned int), 16);
    checkdiesezeroflag(e, tmp);
    ft_printf_add_to_buffer(e, tmp, 0);
    return;
}
