#include "libftprintf.h"

void    ft_printf_special_char(t_env *e, char *format)
{
    char    c;

    if (!format[e->i + 1])
        return ;
    c = format[e->i + 1];
    if (c == 110)/* n */
        e->result[e->size] = 10;
    else if (c == 98)/* \b backspace */
        e->result[e->size] = 8;
    else if (c == 114)/* /r carriage return */
        e->result[e->size] = 13;
    else if (c == 97)/* \a alert/bell */
        e->result[e->size] = 7;
    else if (c == 102)/* \f formFeed */
       e->result[e->size] = 12;
    else if (c == 118)/* \v vertical tab */
        e->result[e->size] = 11;
    else if (c == 116)/* \t horizontal tab */
        e->result[e->size] = 9;
    else if (c == 92)/* / */
        e->result[e->size] = 92;
    else if (c == 34)/* " */
        e->result[e->size] = 34;
    else if (c == 39)/* ' */
        e->result[e->size] = 39;
    else if (c == 63)/* ? */
        e->result[e->size] = 63;
    else
        return;
    e->size+=1;
    e->i += 2;
}