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
	if (ac == 2)
	{
		ret = printf("\nprintf : %s", av[1]);
	}
	return (0);
}
