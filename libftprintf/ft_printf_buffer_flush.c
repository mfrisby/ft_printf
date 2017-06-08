#include "libftprintf.h"

void    ft_printf_buffer_flush(t_env *e)
{
    if (e->size > 3999)
    {
	    ft_putstr(e->result);
    	e->size = 0;
	    ft_bzero(e->result, 4000);
    } 
}