#include "libftprintf.h"

void    ft_printf_smaj(t_env *e)
{
    char tmp[5];
    int ret;
    wchar_t *s = va_arg(e->pa, wchar_t*);

    ret = 0;
    while (*s)
    {
        if (*s <= 127)
        {
            tmp[0] = (char)*s;
            tmp[1] = '\0';
            ft_printf_add_to_buffer(e, tmp, 0);
        }
        else
        {
            ret = ft_printf_unicode(tmp, *s);
            tmp[ret] = '\0';
            ft_printf_add_to_buffer(e, tmp, 0);
        }
        s++;
    }
}