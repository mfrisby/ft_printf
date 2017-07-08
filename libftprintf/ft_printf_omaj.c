#include "libftprintf.h"

void    ft_printf_omaj(t_env *e)
{
    char *tmp;

    e->type = 'O';
    unsigned long int octal = va_arg(e->pa, unsigned long int);
    tmp = ft_printf_itoabase_uli(octal, 8);
    e->type = 'O';
    if (ft_strcmp(tmp, "0") == 0)
    {
        if (e->precision == 0)
            ft_printf_putflags(e, "");
        else
            ft_printf_putflags(e, tmp);
        return;
    }
    ft_printf_putflags(e, tmp);
}