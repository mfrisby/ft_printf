#include "libftprintf.h"

static void ft_printf_add_to_buffer(t_env *e, char *s, int start, int max)
{
    if (max > 0)
    {
        s[max] = '\0';
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
        ft_printf_add_to_buffer(e, s, start, max);
    }
}

void    ft_printf_s(t_env *e)
{
    void *v = va_arg(e->pa , char *);
    //char *s = va_arg(e->pa, char*);
    ft_printf_add_to_buffer(e, s, 0, e->precision);
    return;
}