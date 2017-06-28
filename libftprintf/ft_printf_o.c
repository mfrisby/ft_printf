#include "libftprintf.h"

void ft_printf_o(t_env *e)
{
    char *tmp;

    unsigned int octal = va_arg(e->pa, unsigned int);
    tmp = ft_printf_itoabase(octal, 8);
    ft_printf_add_to_buffer(e, tmp, 0);
}