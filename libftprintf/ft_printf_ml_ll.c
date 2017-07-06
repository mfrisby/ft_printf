#include "libftprintf.h"

void    ft_printf_ml_ll(t_env *e, char **tmp) // long long int | unsigned long long int
{
    if (e->type == 'd' || e->type == 'i')
    {
        long long int deci = va_arg(e->pa, long long int);
        *tmp = ft_printf_stoa_base(deci, 10);
    }
    else if (e->type == 'o')
    {
        unsigned long long int octal = va_arg(e->pa, unsigned long long int);
        *tmp = ft_printf_utoa_base(octal, 8);
    }
    else if (e->type == 'u')
    {
        unsigned long long int deci = va_arg(e->pa, unsigned long long int);
        *tmp = ft_printf_utoa_base(deci, 10);
    }
    else if (e->type == 'x')
    {
        unsigned long long int hexa = va_arg(e->pa, unsigned long long int);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
    else if (e->type == 'X')
    {
        unsigned long long int hexa = va_arg(e->pa, unsigned long long int);
        *tmp = ft_printf_utoa_base(hexa, 16);
    }
}
