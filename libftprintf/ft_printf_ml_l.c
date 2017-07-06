#include "libftprintf.h"

void    ft_printf_ml_l(t_env *e, char **tmp) // long int | unsigned long int
{
    if (e->type == 'd' || e->type == 'i')
    {
        
        long int deci = va_arg(e->pa, long int);
        *tmp = ft_printf_stoa_base(deci, 10);
    }
    else if (e->type == 'o')
    {
        unsigned long int octal = va_arg(e->pa, unsigned long int);
        *tmp = ft_printf_utoa_base(octal, 8);
    }
    else if (e->type == 'u')
    {
        unsigned long int deci = va_arg(e->pa, unsigned long int);
        *tmp = ft_printf_utoa_base(deci, 10);
    }
    else if (e->type == 'x')
    {
        unsigned long int hexa = va_arg(e->pa, unsigned long int);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
    else if (e->type == 'X')
    {
        unsigned long int hexa = va_arg(e->pa, unsigned long int);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
}