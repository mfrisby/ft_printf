#include "libftprintf.h"
#include <string.h>

char	*ft_itoabase_o(unsigned int n)
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
	while ((n / div) > 7 && ++i)
		div *= 8;
	while (n > 7)
	{
		s[i--] = n % 8 + '0';
		n /= 8;
	}
	if (n >= 0)
		s[i] = n + '0';
	return (s);
}

void    ft_printf_o(t_env *e)
{
    char *tmp;
    char *tmp2;

    unsigned int octal = va_arg(e->pa, unsigned int);
    tmp = ft_itoabase_o(octal);
    e->flag_plus = 0;
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