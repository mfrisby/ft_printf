#include "libftprintf.h"

void    ft_printf_x(t_env *e)
{
    int i;
    char *tmp;

    i = 0;
    unsigned int hexa = va_arg(e->pa, unsigned int);
    tmp = ft_printf_itoabase(hexa, 16);
    while (tmp[i])
    {
        tmp[i] = ft_tolower(tmp[i]);
        i++;
    }
    ft_putendl(tmp);
    return;
}
