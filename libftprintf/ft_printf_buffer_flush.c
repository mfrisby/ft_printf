#include "libftprintf.h"

void	ft_printf_buffer_flush(t_env *e)
{
	e->result[e->index] = '\0';
	ft_putstr(e->result);
	e->index = 0;
	ft_bzero(e->result, 4000);
}
