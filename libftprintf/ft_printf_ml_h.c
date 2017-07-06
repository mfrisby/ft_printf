#include "libftprintf.h"

void    ft_printf_ml_h(t_env *e, char **tmp) // short int | unsigned short int
{
    if (e->type == 'd' || e->type == 'i')
    {
        short int deci = va_arg(e->pa, short int);
        *tmp = ft_printf_stoa_base(deci, 10);
    }
    else if (e->type == 'o')
    {
        unsigned short int octal = va_arg(e->pa, unsigned short int);
        *tmp = ft_printf_utoa_base(octal, 8);
    }
    else if (e->type == 'u')
    {
        unsigned short int deci = va_arg(e->pa, unsigned short int);
        *tmp = ft_printf_utoa_base(deci, 10);
    }
    else if (e->type == 'x')
    {
        unsigned short int  hexa = va_arg(e->pa, unsigned short int);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
    else if (e->type == 'X')
    {
        unsigned short int hexa = va_arg(e->pa, unsigned short int);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
}