#include "libftprintf.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char) * (size + 1));
	if (str == NULL)
		return (NULL);
	else
	{
		while (size + 1 > i)
		{
			str[i] = '\0';
			i++;
		}
	}
	return (str);
}
