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
	char fake[5000];
	int toto = 0;
	while (toto < 4800)
	{
		fake[toto] = 'c';
		toto++;
	}
	fake[4800] = 't';
	int ret = ft_printf("%s", fake);
	ft_putchar('\n');

	int ret2 = printf("%s", fake);

	printf("\nret = %d -- ret2 == %d\n", ret, ret2);
/*
	int toto = 65;
	printf("%c", toto);
	return (0);

	int ret = 0;
	int ret2 = 0;
	if (ac == 2)
	{
		ret = ft_printf(av[1]);
		ret2= printf(av[1]);
	}
	else if (ac == 3)
	{
		ret  = ft_printf(av[1], av[2]);
		ret2 = printf(av[1], av[2]);
	}
	else if (ac == 4)
	{
		ret = ft_printf(av[1], av[2], av[3]);
		ret2 = printf(av[1], av[2], av[3]);
	}
	else
		return (0);
	printf("\nret = %d -- ret2 = %d", ret, ret2);
	return (0);*/
}
