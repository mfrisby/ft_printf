#include "libftprintf.h"

void    ft_printf_di(t_env *e)
{
    char *tmp;
    char *tmp2;

    signed int deci = va_arg(e->pa, signed int);
    tmp = ft_strdup(ft_itoa(deci));
    if (e->flag_space == 1 && tmp[0] != '-' && e->flag_plus == 0)
        ft_printf_add_to_buffer(e, " ", 0);
    if (tmp[0] == '-' && e->flag_zero == 0)
    {
        e->neg = 1;
        tmp2 = remove_min(tmp);
        checkfield(e, tmp);
        ft_printf_add_to_buffer(e, "-", 0);
        checkdiesezeroflag(e, tmp2);
        ft_printf_add_to_buffer(e, tmp2, 0);
        e->neg = 0;
        return;
    }
    else if (tmp[0] == '-' && e->flag_zero)
    {
        e->neg = 1;
        ft_printf_add_to_buffer(e, "-", 0);
        tmp2 = remove_min(tmp);
        checkfield(e, tmp);
        checkdiesezeroflag(e, tmp2);
        ft_printf_add_to_buffer(e, tmp2, 0);
        e->neg = 0;
        return;
    }
    else
    {
        checkfield(e, tmp);
        checkdiesezeroflag(e, tmp);
        ft_printf_add_to_buffer(e, tmp, 0);
        return;
    }
    ft_printf_add_to_buffer(e, tmp, 0);
}