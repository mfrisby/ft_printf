#include "libftprintf.h"

void    ft_printf_xmaj(t_env *e)
{
    char *tmp;

    unsigned int hexa = va_arg(e->pa, unsigned int);
    tmp = ft_printf_itoabase(hexa, 16);
    checkdiesezeroflag(e, tmp);
    ft_printf_add_to_buffer(e, tmp, 0);
    return;
}
