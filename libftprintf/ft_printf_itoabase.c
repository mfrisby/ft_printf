#include "libftprintf.h"

static char		*final_return(char *str)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	j = ft_strlen(str);
	if (!(tmp = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	tmp[j] = '\0';
	while (--j >= 0)
	{
		tmp[i] = str[j];
		i++;
	}
	return (tmp);
}

char		*ft_printf_itoabase(unsigned int nbr, int base)
{
	char	buff[512];
	char	*lettre;
	int		cmp;
	int		temp;

	cmp = 0;
	temp = 0;
	if (!(lettre = (char *)malloc(sizeof(char) * 17)))
		return (NULL);
	lettre = "0123456789ABCDEF";
	ft_memset(buff, 0, 512);
	if (nbr == 0)
		buff[0] = '0';
	while (nbr != 0)
	{
		temp = nbr % base;
		buff[cmp] = lettre[temp];
		cmp++;
		nbr /= base;
	}
	return (final_return(buff));
}