#include "libftprintf.h"

void    ft_printf_omaj(t_env *e)
{
    char *tmp;

    unsigned long int octal = va_arg(e->pa, unsigned long int);
    tmp = ft_printf_itoabase_uli(octal, 8);
    ft_printf_add_to_buffer(e, tmp, 0);
}