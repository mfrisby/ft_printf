#include "libftprintf.h"

void    ft_printf_dmaj(t_env *e)
{
   char *tmp;

    signed long int deci = va_arg(e->pa, signed long int);
    tmp = ft_printf_itoabase_sli(deci, 10);
    checkfield(e, tmp);
    checkdiesezeroflag(e, tmp);
    ft_printf_add_to_buffer(e, tmp, 0);
    return;
}