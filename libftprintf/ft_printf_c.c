#include "libftprintf.h"

void    ft_printf_c(t_env *e)
{
    char tmp[2];
    int c;
    // unsigned char uc;

    // uc = 0;
    e->type = 'c';
    if (e->m_l == 1)
    {
        ft_printf_cmaj(e);
        return;
    }
    else
        c = va_arg(e->pa, int);
    if (c == 0)
    {
        e->size+=1;
        ft_printf_putflags(e, "");
        ft_printf_buffer_flush(e);
        ft_putchar(NULL);
        return;
    }
    while (c > 128)
    {
        c -= 128;
    }
    tmp[0] = c;
    tmp[1] = '\0';
    ft_printf_putflags(e, tmp);
    // if (c >= 0 && c <= 255)
    // {
    //     uc = c;
    //     e->result[e->index] = uc;
    //     e->index++;
    //     e->size++;
    // }
}