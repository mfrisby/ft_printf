#include "libftprintf.h"

void     checkdiesezeroflag(t_env *e, char *tmp)
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

    while (y < e->precision)
    {
        ft_printf_add_to_buffer(e, "0", 0);
        y++;
    }
}