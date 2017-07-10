#include "libftprintf.h"

char	*ft_itoa(int n)
{
	char	*s;
	int		div;
	size_t	i;

	i = 0;
	div = 1;
	s = ft_strnew(11);
	if (n == -2147483648)
		s = "-2147483648";
	else if (n < 0)
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
