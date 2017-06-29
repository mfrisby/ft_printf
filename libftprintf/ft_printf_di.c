#include "libftprintf.h"
static char     *remove_min(char *tmp)
{
    int i;
    int y;

    i = 1;
    y = 0;
    while (tmp[i])
    {
        tmp[y] = tmp[i];
        i++;
        y++;
        tmp[y] = '\0';
    }
    return (tmp);
}

static void     checkfield(t_env *e, char *tmp)
{
    int i;
    int y;

    i = ft_strlen(tmp);
    y = i;
    while (i < (e->field_width - (e->precision - y)))
    {
        if (e->flag_zero)
            ft_printf_add_to_buffer(e, "0", 0);
        else
            ft_printf_add_to_buffer(e, " ", 0);
        i++;
    }
}

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

    while (y < e->precision)
    {
        ft_printf_add_to_buffer(e, "0", 0);
        y++;
    }
}
void    ft_printf_di(t_env *e)
{
    char *tmp;
    char *tmp2;

    signed int deci = va_arg(e->pa, signed int);
    tmp = ft_printf_itoabase_si(deci, 10);
    if (tmp[0] == '-')
    {
        tmp2 = remove_min(tmp);
        checkfield(e, tmp);
        ft_printf_add_to_buffer(e, "-", 0);
        checkdiesezeroflag(e, tmp2);
        ft_printf_add_to_buffer(e, tmp2, 0);
        return;
    }
    else
        checkdiesezeroflag(e, tmp);
    ft_printf_add_to_buffer(e, tmp, 0);
    return;
}