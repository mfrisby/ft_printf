#include "libftprintf.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)b;
	if (len)
	{
		while (i < len)
		{
			*ptr = (unsigned char)c;
			i++;
			ptr++;
		}
	}
	return (b);
}
