#include "libftprintf.h"

void	ft_putnbr(int n)
{
	char	c;

	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n <= 9 && n != -2147483648)
	{
		c = (n + 48);
		ft_putchar(c);
	}
	else if (n != -2147483648)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
