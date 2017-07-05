#include "locale.h"
#include "libftprintf.h"
#include <wchar.h>

void    ft_printf_cmaj(t_env *e)
{
    char tmp[5];
    wint_t cw = va_arg(e->pa, wint_t);
    if (cw <= 127)
    {
            tmp[0] = (char)cw;
            tmp[1] = '\0';
            ft_printf_add_to_buffer(e, tmp, 0);
    }
    else
    {
        ft_printf_unicode(tmp, cw);
        ft_printf_add_to_buffer(e, tmp, 0);
    }
    return;
}
