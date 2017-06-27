#include "libftprintf.h"

void    ft_printf_buffer_flush(t_env *e)
{
    if (e->index > 3999)
    {
        e->result[e->index] = '\0';
	    ft_putstr(e->result);
    	e->index = 0;
	    ft_bzero(e->result, 4000);
    } 
}