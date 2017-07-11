#include "libftprintf.h"

void	ft_printf_dmaj(t_env *e)
{
	char				*tmp;
	signed long int		deci;

	tmp = NULL;
	deci = va_arg(e->pa, signed long int);
	tmp = ft_stoa_base(deci, 10);
	e->type = 'D';
	ft_printf_putflags(e, tmp);
}
