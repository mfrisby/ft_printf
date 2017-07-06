#include "libftprintf.h"

void    ft_printf_u(t_env *e)
{
    char *tmp;
    char *tmp2;

     if (e->m_ll)
        tmp = ft_printf_utoa_base(va_arg(e->pa, unsigned long long), 10);
    else if (e->m_l)
        tmp = ft_printf_utoa_base(va_arg(e->pa, unsigned long), 10);
    else if (e->m_j)
        tmp = ft_printf_utoa_base(va_arg(e->pa, uintmax_t), 10);
    else if (e->m_z)
        tmp = ft_printf_utoa_base(va_arg(e->pa, size_t), 10);
    else if (e->m_h)
        tmp = ft_printf_utoa_base((unsigned short)va_arg(e->pa, unsigned int), 10);
    else if (e->m_hh)
        tmp = ft_printf_utoa_base((unsigned char)va_arg(e->pa, unsigned int), 10);
    else
        tmp = ft_printf_utoa_base(va_arg(e->pa, unsigned int), 10);
    if (tmp[0] == '-')
    {
        e->neg = 1;
        tmp2 = remove_min(tmp);
        checkfield(e, tmp);
        ft_printf_add_to_buffer(e, "-", 0);
        checkdiesezeroflag(e, tmp2);
        ft_printf_add_to_buffer(e, tmp2, 0);
        e->neg = 0;
        return;
    }
    else
    {
        checkfield(e, tmp);
        checkdiesezeroflag(e, tmp);
        ft_printf_add_to_buffer(e, tmp, 0);
        return;
    }
    ft_printf_add_to_buffer(e, tmp, 0);
}