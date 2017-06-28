#include "libftprintf.h"

static void     checkdiesezeroflag(t_env *e, char *tmp)
{
    int i;

    i = ft_strlen(tmp);
    if (e->flag_diese == 1 && ft_strcmp("0", tmp) != 0 && 
        ft_strcmp("-0", tmp) != 0 && ft_strcmp("+0", tmp) != 0)
    {
        ft_printf_add_to_buffer(e, "0X", 0);
       // e->field_width -= 2;
    }
    while (e->flag_zero == 1 && e->flag_moins == 0 && i <= e->field_width && i <= e->precision)
    {
        ft_printf_add_to_buffer(e, "0", 0);
        i++;
    }
}

void    ft_printf_xmaj(t_env *e)
{
    char *tmp;

    unsigned int hexa = va_arg(e->pa, unsigned int);
    tmp = ft_printf_itoabase(hexa, 16);
    checkdiesezeroflag(e, tmp);
    ft_printf_add_to_buffer(e, tmp, 0);
    return;
}
