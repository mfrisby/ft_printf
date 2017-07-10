#include "libftprintf.h"

void	ft_putstr(char const *s)
{
	int i;

	if (s == NULL)
		return ;
	i = ft_strlen(s);
	write(1, s, i);
}
