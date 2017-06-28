#include "libftprintf.h"

void    ft_printf_s(t_env *e)
{
    char *s = va_arg(e->pa, char*);
    ft_printf_add_to_buffer(e, s, 0);
    return;
}