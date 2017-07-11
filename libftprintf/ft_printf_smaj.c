#include "libftprintf.h"

static void		ft_printf_parse_smaj(t_env *e, wchar_t *s)
{
	char	*tmp;
	int		ret;
	char	*s1;
	int		total;
	char    *s2;

	s2 = NULL;
	tmp = ft_strnew(5);
	ret = 0;
	total = 0;
	s1 = ft_strnew(1);
	while (*s)
	{
		ret = ft_printf_unicode((unsigned char*)tmp, *s);
		tmp[ret] = '\0';
		total += ret;
		if (total > e->precision && e->precision >= 0)
		{
			total -= ret;
			s1[total] = '\0';
			break ;
		}
		s2 = ft_strjoin_free(s1, tmp, 1);
		s1 = s2;
		s++;
	}
	ft_printf_putflags(e, s1);
	ft_strdel(&tmp);
}

void			ft_printf_smaj(t_env *e)
{
	wchar_t *s;

	s = va_arg(e->pa, wchar_t*);
	e->type = 'S';
	if (s == NULL)
	{
		ft_printf_putflags(e, ft_strdup("(null)"));
	}
	else
		ft_printf_parse_smaj(e, s);
}
