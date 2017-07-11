#include "libftprintf.h"
#include <wchar.h>

void		ft_printf_cmaj(t_env *e)
{
	char	*tmp;
	int		ret;
	wint_t	cw;

	tmp = ft_strnew(5);
	cw = va_arg(e->pa, wint_t);
	ret = 0;
	if (cw == 0)
	{
		ft_printf_buffer_flush(e);
		e->size++;
		ft_putchar(0);
		ft_strdel(&tmp);
	}
	else if (cw <= 127)
	{
		tmp[0] = (char)cw;
		tmp[1] = '\0';
		ft_printf_add_to_buffer(e, tmp, 0);
		ft_strdel(&tmp);
	}
	else
	{
		ret = ft_printf_unicode((unsigned char*)tmp, cw);
		tmp[ret] = '\0';
		ft_printf_add_to_buffer(e, tmp, 0);
		ft_strdel(&tmp);
	}
}
