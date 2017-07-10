#include "libftprintf.h"

static char		*getprecision(t_env *e, char *s)
{
	int		len;
	char	*tmp;
	int		i;

	i = 0;
	len = ft_strlen(s);
	tmp = NULL;
	if (e->precision >= 0 && e->type == 's')
	{
		if (e->precision < (int)ft_strlen(s))
			s = ft_strsub(s, 0, e->precision);
		return (s);
	}
	else if (e->type != 'c' && e->type != 'C' && e->type != 'S')
	{
		if (e->precision > len)
		{
			tmp = ft_strnew(e->precision - len);
			while (i < e->precision - len)
				tmp[i++] = '0';
			s = ft_strjoin(tmp, s);
		}
	}
	return (s);
}

static char		*flagcompar(t_env *e, char *s)
{
	if (e->type == 'c' && ft_strcmp(s, "") == 0)
		e->field_width -= 1;
	if (e->type == 'c')
		e->precision = -1;
	if ((e->flag_moins == 1 || e->precision >= 0) && e->flag_zero == 1 &&
			(e->type == 'd' || e->type == 'u' || e->type == 'o'
			|| e->type == 'x' || e->type == 'X'))
		e->flag_zero = 0;
	if (e->flag_plus == 1 && e->neg == 1)
		e->flag_plus = 0;
	if (e->flag_plus == 1 && e->flag_space == 1)
		e->flag_space = 0;
	if (e->neg == 1 && e->flag_space == 1)
		e->flag_space = 0;
	if (e->flag_space == 1)
		e->field_width -= 1;
	return (s);
}

static char		*getfield(t_env *e, char *s, char *field, char *dp)
{
	char	c;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s) + ft_strlen(dp);
	c = e->flag_zero == 1 ? '0' : ' ';
	if (e->field_width > len)
	{
		field = ft_strnew(e->field_width - len);
		while (i < e->field_width - len)
		{
			field[i] = c;
			i++;
		}
	}
	if (field == NULL)
		return ("");
	return (field);
}

static char		*getdp(t_env *e, char *dp, char *s)
{
	dp = ft_strnew(2);
	if ((e->flag_diese == 1 && (e->type == 'x' || e->type == 'X'))
	|| e->type == 'p')
	{
		dp[0] = '0';
		if (e->type == 'x' || e->type == 'p')
			dp[1] = 'x';
		else
			dp[1] = 'X';
	}
	else if (e->flag_diese == 1 && (e->type == 'o' || e->type == 'O')
	&& s[0] != '0')
		dp[0] = '0';
	else if (e->type == 'd' || e->type == 'i' || e->type == 'o')
	{
		if (e->neg)
			dp[0] = '-';
		else if (e->flag_plus)
			dp[0] = '+';
	}
	return (dp);
}

void			ft_printf_putflags(t_env *e, char *s)
{
	char *field;
	char *dp;
	char *space;

	space = NULL;
	dp = NULL;
	field = NULL;
	flagcompar(e, s);
	space = getspace(e, space);
	s = getprecision(e, s);
	dp = getdp(e, dp, s);
	field = getfield(e, s, field, dp);
	if (e->flag_moins)
		s = ft_strjoin(s, field);
	else
		s = ft_strjoin((!ft_strlen(field) || field[0] == '0' ? field : dp), s);
	s = ft_strjoin((e->flag_moins || (!ft_strlen(field) || field[0] == '0')
	? dp : field), s);
	s = ft_strjoin(space, s);
	ft_printf_add_to_buffer(e, s, 0);
}
