#include "libftprintf.h"

char		*ft_printf_itoabase_sli(signed long nbr, int base)
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
	return (ft_printf_str_reverse(buff));
}