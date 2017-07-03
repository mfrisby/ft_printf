#include "libftprintf.h"

char	*ft_itoabase_u(unsigned int n)
{
	char	*s;
	int		div;
	size_t	i;

	i = 0;
	div = 1;
	s = ft_strnew(20);
	if (n < 0)
	{
		n *= -1;
		s[i++] = '-';
	}
	while ((n / div) > 9 && ++i)
		div *= 10;
	while (n > 9)
	{
		s[i--] = n % 10 + '0';
		n /= 10;
	}
	if (n >= 0)
		s[i] = n + '0';
	return (s);
}

void    ft_printf_u(t_env *e)
{
    char *tmp;
    char *tmp2;

    unsigned int deci = va_arg(e->pa, unsigned int);
    tmp = ft_itoabase_u(deci);
    if (tmp[0] == '-')
    {
        e->neg = 1;
        tmp2 = remove_min(tmp);
        checkfield(e, tmp);
        ft_printf_add_to_buffer(e, "-", 0);
        checkdiesezeroflag(e, tmp2);
        ft_printf_add_to_buffer(e, tmp2, 0);
        e->neg = 0;
        return;
    }
    else
    {
        checkfield(e, tmp);
        checkdiesezeroflag(e, tmp);
        ft_printf_add_to_buffer(e, tmp, 0);
        return;
    }
    ft_printf_add_to_buffer(e, tmp, 0);
}