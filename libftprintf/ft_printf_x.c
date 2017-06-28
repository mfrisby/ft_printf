#include "libftprintf.h"

static void ft_printf_add_to_buffer(t_env *e, char *s, int start)
{
    if (e->precision > 0)
    {
        s[e->precision] = '\0';
    }
    while (e->index <= 3999 && s[start])
    {
        e->result[e->index] = s[start];
        e->index++;
        e->size++;
        start++;
    }
    if (e->index >= 3999)
    {
        ft_printf_buffer_flush(e);
        ft_printf_add_to_buffer(e, s, start);
    }
}


static void     checkdiesezeroflag(t_env *e, char *tmp)
{
    int i;

    i = ft_strlen(tmp);
    if (e->flag_diese == 1 && ft_strcmp("0", tmp) != 0 && 
        ft_strcmp("-0", tmp) != 0 && ft_strcmp("+0", tmp) != 0)
    {
        ft_printf_add_to_buffer(e, "0x", 0);
        e->field_width -= 2;
    }
    while (e->flag_zero == 1 && e->flag_moins == 0 && i < e->field_width)
    {
        e->result[e->index] = '0';
        e->index++;
        e->size++;
        i++;
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
