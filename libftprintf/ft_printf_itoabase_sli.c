#include "libftprintf.h"
#include <limits.h>
char		*ft_printf_itoabase_sli(signed long int nbr, int base)
{
	char	*s;
	int		div;
	size_t	i;

	i = 0;
	div = 1;
	s = ft_strnew(20);
	if (nbr == LONG_MAX)
	{
		s = ft_strdup("9223372036854775807");
		return s;
	}
	else if (nbr == LONG_MIN)
	{
		s = ft_strdup("-9223372036854775808");
		return s;
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		s[i++] = '-';
	}
	while ((nbr / div) > 9 && ++i)
		div *= 10;
	while (nbr > 9)
	{
		s[i--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (nbr >= 0)
		s[i] = nbr + '0';
	return (s);
}