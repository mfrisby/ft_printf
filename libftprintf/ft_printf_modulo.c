#include "libftprintf.h"
/*
** %[flag][min width][precision][length modifier][conversion specifier]
** Check flags then do conversion
*/
void    ft_printf_modulo(t_env *e, char *format)
{
    if (!format[e->i+1])
        return ;
    //ft_printf_flags();
    //ft_printf_min_width();
    //ft_printf_precision();
    //ft_printf_length_modifier();
    //ft_printf_conversion_specifier();
    return ;
}