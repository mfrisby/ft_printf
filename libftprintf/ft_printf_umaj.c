#include "libftprintf.h"

void    ft_printf_umaj(t_env *e)
{
    char *tmp;

    unsigned long int deci = va_arg(e->pa, unsigned long int);
    tmp = ft_printf_itoabase_uli(deci, 10);
    ft_printf_add_to_buffer(e, tmp, 0);
}