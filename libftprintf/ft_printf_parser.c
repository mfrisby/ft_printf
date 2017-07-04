#include "libftprintf.h"
/*
** %[flag][min width][precision][length modifier][conversion specifier]
** Check flags then do conversion
*/

static int      ft_printf_field_width(t_env *e, char *format)
{
    int start;

    start = e->i;
    if (format[e->i] == '*')
    {
        e->field_width = va_arg(e->pa, int);
        e->i+=1;
        return (0);
    }
    if (format[e->i] >= '1' && format[e->i] <= '9')
    {
        while (format[e->i] && format[e->i] >= '0' && format[e->i] <= '9')
        {
            e->i++;
        }
        if (start != e->i)
        {
            e->field_width = ft_atoi(ft_strsub(format, start, (e->i+1) - start));
            return (0);
        }
    }
    return (-1);
}

static int      ft_printf_isflag(char c, t_env *e)
{
    if (c == '-')
        e->flag_moins = 1;
    else if (c == '+')
        e->flag_plus = 1;
    else if (c == ' ')
        e->flag_space = 1;
    else if (c == '0')
        e->flag_zero = 1;
    else if (c == '#')
        e->flag_diese = 1;
    else
        return (-1);
    e->i++;
    return (0);
}

void    ft_printf_parser(t_env *e, char *format)
{
    e->i+=1;//after %
    while (format[e->i])
    {
        if (ft_printf_conversion(e, format[e->i]) == 0)
        {
            e->i+=1;
            break;
        }
        if (ft_printf_isflag(format[e->i], e) == 0)
            continue;
        if (ft_printf_field_width(e, format) == 0)
            continue;
        if (ft_printf_precision(e, format) == 0)
            continue;
        if (ft_printf_length(e, format) == 0)//modificateur de longueur
            continue;
        e->i+=1;
    }
    return ;
}