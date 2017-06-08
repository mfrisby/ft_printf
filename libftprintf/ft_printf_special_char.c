#include "libftprintf.h"

char    ft_printf_printable_char(char result, char c)
{
    if (c == 92)/* / */
        result = 92;
    if (c == 34)/* " */
        result = 34;
    if (c == 39)/* ' */
        result = 39;
    if (c == 63)/* ? */
        result = 63;
    return (result);
}

char    ft_printf_special_char(int i, char *format)
{
    char    c;
    char    result;

    result = 0;
    if (!format[i + 1])
        return (result);
    c = format[i + 1];
    if (c == 110)/* n */
        result = 10;
    else if (c == 98)/* \b backspace */
        result = 8;
    else if (c == 114)/* /r carriage return */
        result = 13;
    else if (c == 97)/* \a alert/bell */
        result = 7;
    else if (c == 102)/* \f formFeed */
       result = 12;
    else if (c == 118)/* \v vertical tab */
        result = 11;
    else if (c == 116)/* \t horizontal tab */
        result = 9;
    else
        result = ft_printf_printable_char(result, c);
    return (result);
}