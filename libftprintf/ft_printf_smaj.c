#include "libftprintf.h"

static void ft_printf_parse_smaj(t_env *e, wchar_t *s, int ret)
{
    char tmp[5];
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

void        ft_printf_smaj(t_env *e)
{
    int ret;
    wchar_t *s;
    
    s = va_arg(e->pa, wchar_t*);
    ret = 0;
    if (s == NULL)
        ft_printf_add_to_buffer(e, "(null)", 0);
    else
        ft_printf_parse_smaj(e, s, ret);
}