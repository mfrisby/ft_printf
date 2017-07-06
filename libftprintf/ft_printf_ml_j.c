#include "libftprintf.h"

void    ft_printf_ml_j(t_env *e, char **tmp) // intmax_t | uintmax_t
{
    if (e->type == 'd' || e->type == 'i')
    {
        intmax_t deci = va_arg(e->pa, intmax_t);
        *tmp = ft_printf_stoa_base(deci, 10);
    }
    else if (e->type == 'o')
    {
        uintmax_t octal = va_arg(e->pa, uintmax_t);
        *tmp = ft_printf_utoa_base(octal, 8);
    }
    else if (e->type == 'u')
    {
        uintmax_t deci = va_arg(e->pa, uintmax_t);
        *tmp = ft_printf_utoa_base(deci, 10);
    }
    else if (e->type == 'x')
    {
        uintmax_t hexa = va_arg(e->pa, uintmax_t);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
    else if (e->type == 'X')
    {
        uintmax_t hexa = va_arg(e->pa, uintmax_t);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
}