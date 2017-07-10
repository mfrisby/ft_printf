#include "libftprintf.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char*)s;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			ptr[i] = 0;
			i++;
		}
	}
}
