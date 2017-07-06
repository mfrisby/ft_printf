#include "libftprintf.h"

void    ft_printf_ml_hh(t_env *e, char **tmp) // signed char | unsigned char
{
    if (e->type == 'd' || e->type == 'i')
    {
        signed char deci = va_arg(e->pa, signed char);
        *tmp = ft_printf_stoa_base(deci, 10);
    }
    else if (e->type == 'o')
    {
        unsigned char octal = va_arg(e->pa, unsigned char);
        *tmp = ft_printf_utoa_base(octal, 8);
    }
    else if (e->type == 'u')
    {
        unsigned char deci = va_arg(e->pa, unsigned char);
        *tmp = ft_printf_utoa_base(deci, 10);
    }
    else if (e->type == 'x')
    {
        unsigned char hexa = va_arg(e->pa, unsigned char);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
    else if (e->type == 'X')
    {
        unsigned char hexa = va_arg(e->pa, unsigned char);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
}