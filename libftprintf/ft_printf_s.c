#include "libftprintf.h"

static void ft_printf_add_to_buffer(t_env *e, char *s, int start)
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
        ft_putendl("je suis ici");
        ft_printf_buffer_flush(e);
        ft_printf_add_to_buffer(e, s, start);
    }
}

void    ft_printf_s(t_env *e)
{
    ft_putstr("ft_printf_s : ");
    char *s = va_arg(e->pa, char*);
    ft_printf_add_to_buffer(e, s, 0);
    if (e->precision)
    {
        ft_putendl("no one is innocent.");
    }
    return;
}