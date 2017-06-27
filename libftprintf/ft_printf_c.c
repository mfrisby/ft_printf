#include "libftprintf.h"

void    ft_printf_c(t_env *e)
{
    int c;
    unsigned char uc;

    uc = 0;
    c = va_arg(e->pa, int);
    while (c > 128)
    {
        c -= 128;
    }
    if (c >= 0 && c <= 255)
    {
        uc = c;
        e->result[e->index] = uc;
        e->index++;
        e->size++;
    }
    return;
}