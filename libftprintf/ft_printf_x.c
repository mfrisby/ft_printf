#include "libftprintf.h"

static void     checkdiesezeroflag(t_env *e, char *tmp)
{
    int i;
    int y;

    i = ft_strlen(tmp);
    y = i;
    if (e->flag_diese == 1 && ft_strcmp("0", tmp) != 0 && 
        ft_strcmp("-0", tmp) != 0 && ft_strcmp("+0", tmp) != 0)
    {
        ft_printf_add_to_buffer(e, "0x", 0);
    }

    while (i < (e->field_width - (e->precision - y)))
    {
        if (e->flag_zero)
            ft_printf_add_to_buffer(e, "0", 0);
        else
            ft_printf_add_to_buffer(e, " ", 0);
        i++;
    }
    while (y < e->precision)
    {
        ft_printf_add_to_buffer(e, "0", 0);
        y++;
    }
}

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
    checkdiesezeroflag(e, tmp);
    ft_printf_add_to_buffer(e, tmp, 0);
    return;
}
