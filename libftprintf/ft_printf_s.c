#include "libftprintf.h"

void    ft_printf_s(t_env *e)
{
    char *s;
    
    s = va_arg(e->pa, char*);
    if (e->precision > 0 && (int)(ft_strlen(s))> e->precision)
        s = ft_strsub(s, 0, e->precision);
    ft_printf_add_to_buffer(e, s, 0);
    return;
}