#include "libftprintf.h"

static int  ft_printf_conversion2(t_env *e, char c)
{
    if (c == 'o')
        ft_printf_o(e);
    else if (c == 'O')
        ft_printf_omaj(e);
    else if (c == 'x')
        ft_printf_x(e);
    else if (c == 'X')
        ft_printf_xmaj(e);
    else if (c == 'c')
        ft_printf_c(e);
    else if (c == 'C')
        ft_printf_cmaj(e);
    else if (c == 'd' || c == 'i')
        ft_printf_di(e);
    else if (c == 'D')
        ft_printf_dmaj(e);
    else
        return (-1);
    e->type = c;
    return (1);
}

int        ft_printf_conversion(t_env *e, char c){
    if (e->flag_moins == 1 && e->flag_zero == 1)
        e->flag_zero = 0;//min annule zero
    if (ft_printf_conversion2(e, c) == 1)
        return (0);
    if (c == 'u')
        ft_printf_u(e);
    else if (c == 'U')
        ft_printf_umaj(e);
    else if (c == 's')
        ft_printf_s(e);
    else if (c == 'S')
        ft_printf_smaj(e);
    else if (c == 'p')
        ft_printf_p(e);
    else if (c == '%')
        ft_printf_modulo(e);
    else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    else
        return (-1);
    return (0);
}