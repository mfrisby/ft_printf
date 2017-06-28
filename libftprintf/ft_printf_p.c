#include "libftprintf.h"

void    ft_printf_p(t_env *e)
{
    int i;
    char *tmp;

    i = 0;
    unsigned long int hexa = va_arg(e->pa, unsigned long int);
    tmp = ft_printf_itoabase_uli(hexa, 16);
    while (tmp[i])
    {
        tmp[i] = ft_tolower(tmp[i]);
        i++;
    }
    ft_printf_add_to_buffer(e, "0x", 0);
    ft_printf_add_to_buffer(e, tmp, 0);
}   