#include "libftprintf.h"
static void ft_putfields(t_env *e, char *s)
{
    int i;
    int len;
    char c[2];

    i = 0;
    len = ft_strlen(s);
    c[0] = e->flag_zero > 0 ? '0': ' ';
    c[1] = '\0';
    while (i + len < e->field_width)
    {
        ft_printf_add_to_buffer(e, c, 0);
        i++;
    }
}
void    ft_printf_modulo(t_env *e)
{
    char s[2];

    s[0] = '%';
    s[1] = '\0';
    if (e->flag_moins == 0)
        ft_putfields(e, s);
    ft_printf_add_to_buffer(e, s, 0);
    if (e->flag_moins == 1)
        ft_putfields(e, s);
    return;
}