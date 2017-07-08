#include "libftprintf.h"

void    ft_printf_s(t_env *e)
{
    char *s;
    
    if (e->m_l == 1)
    {
        ft_printf_smaj(e);
        return;
    }
    else
        s = va_arg(e->pa, char*);
    e->type = 's';
    if (s == NULL)
        s = ft_strdup("(null)");
    ft_printf_putflags(e, s);
}