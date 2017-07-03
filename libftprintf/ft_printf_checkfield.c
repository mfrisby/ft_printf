#include "libftprintf.h"

void     checkfield(t_env *e, char *tmp)
{
    int i;
    int j;
    int y;

    i = ft_strlen(tmp);
    j = e->field_width - i;
    y =(e->neg == 1) ? i - 1 : i;
    if (e->flag_plus == 1)
    {
        e->precision = 0;
        return ;
    }
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