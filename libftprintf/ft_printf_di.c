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
    int j;
    int y;

    i = ft_strlen(tmp);
    j = e->field_width - i;
    y =(e->neg == 1) ? i - 1 : i;
    //printf("%d %d\n", e->field_width, e->precision);
    if (e->flag_moins == 1)
    {
        e->size += (j - 1);
        return;
    }
    if (e->field_width == 0 && e->precision == 0)
        return;
    if (e->field_width > 0 && e->precision == 0)
    {
        if (i >= e->field_width)
            return;
        while (j > 0)
        {            
            if (e->neg == 1)
            {
                j--;
                e->neg = 0;
            }
            if (e->flag_zero)
                ft_printf_add_to_buffer(e, "0", 0);
            else
                ft_printf_add_to_buffer(e, " ", 0);
            j--;
        }
        return;
    }
    if (e->precision < e->field_width)
        e->flag_zero = 0;
    //printf("flag_zero = %d\n", e->flag_zero);
    if (i >= e->field_width && e->field_width <= e->precision)
        return;
    while (i < (e->field_width - (e->precision - y)))
    {
        if (e->flag_zero)
            ft_printf_add_to_buffer(e, "0", 0);
        else
        {
            ft_printf_add_to_buffer(e, " ", 0);
        }
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

 //   printf("flag_zero = %d\n", e->flag_zero);
    signed int deci = va_arg(e->pa, signed int);
    tmp = ft_strdup(ft_itoa(deci));
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