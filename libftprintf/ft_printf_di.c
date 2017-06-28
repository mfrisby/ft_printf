#include "libftprintf.h"

void    ft_printf_di(t_env *e)
{
    char *tmp;

    signed int deci = va_arg(e->pa, signed int);
    tmp = ft_printf_itoabase_si(deci, 10);
    ft_putendl(tmp);
    return;
}