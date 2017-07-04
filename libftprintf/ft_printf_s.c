#include "libftprintf.h"

static void putfields(t_env *e, char *s)
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

void    ft_printf_s(t_env *e)
{
    char *s;
    
    s = va_arg(e->pa, char*);
    if (s == NULL)
        s = ft_strdup("(null)");
    if (e->precision > 0 && (int)(ft_strlen(s))> e->precision)
        s = ft_strsub(s, 0, e->precision);
    if (e->flag_moins == 0)
        putfields(e, s);
    ft_printf_add_to_buffer(e, s, 0);
    if (e->flag_moins == 1)
        putfields(e, s);
    return;
}