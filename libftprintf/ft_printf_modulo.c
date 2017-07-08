#include "libftprintf.h"

void    ft_printf_modulo(t_env *e)
{
    char s[2];

    s[0] = '%';
    s[1] = '\0';
    e->precision = 0;
    ft_printf_putflags(e, s);
}