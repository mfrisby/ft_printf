#include "libftprintf.h"

void		ft_printf_p(t_env *e)
{
	int					i;
	char				*tmp;
	unsigned long int	hexa;

	i = 0;
	hexa = va_arg(e->pa, unsigned long int);
	tmp = ft_utoa_base(hexa, 16);
	while (tmp[i])
	{
		tmp[i] = ft_tolower(tmp[i]);
		i++;
	}
	e->type = 'p';
	if (ft_strcmp(tmp, "0") == 0)
	{
		if (e->precision == 0)
			ft_printf_putflags(e, ft_strdup(""));
		else
			ft_printf_putflags(e, tmp);
		return ;
	}
	ft_printf_putflags(e, tmp);
}
