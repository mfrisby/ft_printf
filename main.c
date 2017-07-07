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
	int ret1 = 0;
	int ret2 = 0;
	ret1= ft_printf("fprint: %+ 010d\n", 10);
	ret2 = printf("printf: %+ 010d\n", 10);
	// ret1= ft_printf("@main_ftprintf: %###-#0000 33...12..#0+0d\n", 256);
	// ret2 = printf("@main_ftprintf: %#0 33+d\n", 256);
	printf("\nfprint: %d\nprintf: %d\n", ret1, ret2);
	return (0);
}