#include "libftprintf.h"


void    ft_printf_u(t_env *e)
{
    char *tmp;

    unsigned int deci = va_arg(e->pa, unsigned int);
    tmp = ft_printf_itoabase(deci, 10);
    ft_printf_add_to_buffer(e, tmp, 0);
}