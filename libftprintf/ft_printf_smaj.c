#include "libftprintf.h"

static void ft_printf_parse_smaj(t_env *e, wchar_t *s)
{
    char tmp[5];
    int ret;
    char *s1;

    ret = 0;
    s1 = ft_strnew(1);
    while (*s)
    {
        if (*s <= 127)
        {
            tmp[0] = (char)*s;
            tmp[1] = '\0';
        }
        else
        {
            ret = ft_printf_unicode(tmp, *s);
            tmp[ret] = '\0';
        }
        s1 = ft_strjoin(s1, tmp);
        s++;
    }
    ft_printf_putflags(e, s1);
}

void        ft_printf_smaj(t_env *e)
{
    wchar_t *s;
    
    s = va_arg(e->pa, wchar_t*);
     if (s == NULL)
         ft_printf_add_to_buffer(e, "(null)", 0);
     else
         ft_printf_parse_smaj(e, s);
}