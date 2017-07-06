#include "libftprintf.h"

void    ft_printf_ml_z(t_env *e, char **tmp) //size_t | ssize_t
{
    if (e->type == 'd' || e->type == 'i')
    {
        ssize_t deci = va_arg(e->pa, ssize_t);
        *tmp = ft_printf_stoa_base(deci, 10);
    }
    else if (e->type == 'o')
    {
        size_t octal = va_arg(e->pa, size_t);
        *tmp = ft_printf_utoa_base(octal, 8);
    }
    else if (e->type == 'u')
    {
        size_t deci = va_arg(e->pa, size_t);
        *tmp = ft_printf_utoa_base(deci, 10);
    }
    else if (e->type == 'x')
    {
        size_t hexa = va_arg(e->pa, size_t);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
    else if (e->type == 'X')
    {
        size_t hexa = va_arg(e->pa, size_t);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
}