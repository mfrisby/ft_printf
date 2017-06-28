#include "libftprintf.h"

void ft_printf_add_to_buffer(t_env *e, char *s, int start)
{
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