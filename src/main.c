/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 17:00:13 by mfrisby           #+#    #+#             */
/*   Updated: 2017/05/31 14:07:48 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(int ac, char **av)
{
	int result = 12;
	printf("***test***\n");
	printf("%.1d", result);
	printf("\n***test***\n");
	//%8.2Lf
	int ret = 0;
	if (ac == 2)
	{
		ret = ft_printf(av[1]);
	}
	if (ac == 3)
	{
		ret  = ft_printf(av[1], av[2]);
	}
	if (ac == 4)
	{
		ret = ft_printf(av[1], av[2], av[3]);
	}
	
	printf("\n");
	/** COMPAR PRINTF **/
	int ret2 = printf("%%");
	printf("\nret = %d -- %d", ret, ret2);
	return (0);
}
