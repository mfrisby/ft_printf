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

	// ret1 = printf("printf: %5c\n", 42);
	// ret2 = ft_printf("fprint: %5c\n", 42);
	//  printf("printf: %d fprintf: %d\n\n", ret1, ret2);

	// ret1 = printf("printf: % c\n", 0);
	// ret2 = ft_printf("fprint: % c\n", 0);
	//  printf("printf: %d fprintf: %d\n\n", ret1, ret2);

	//  ret1 = printf("printf: %#.x %#.0x\n", 0, 0);
	//  ret2 = ft_printf("fprint: %#.x %#.0x\n", 0, 0);
	//  printf("printf: %d fprintf: %d\n\n", ret1, ret2);

	// ret1 = printf("printf: %.x %.0x\n", 0, 0);
	// ret2 = ft_printf("fprint: %.x %.0x\n", 0, 0);
	//  printf("printf: %d fprintf: %d\n\n", ret1, ret2);

	// ret1 = printf("printf: %.2c\n", NULL);
	// ret2 = ft_printf("fprint: %.2c\n", NULL);
	// printf("printf: %d fprintf: %d\n\n", ret1, ret2);

	// ret1 = printf("printf: %c\n", 0);
	// ret2 = ft_printf("fprint: %c\n", 0);
	// printf("printf: %d fprintf: %d\n\n", ret1, ret2);
	
	ret1 = printf("printf: %#.x %#.0x\n", 0, 0);
	ret2 = ft_printf("fprint: %#.x %#.0x\n", 0, 0);
	printf("printf: %d fprintf: %d\n\n", ret1, ret2);

	// ret1 = printf("printf: %c and text\n", 0);
	// ret2 = ft_printf("fprint: %c and text\n", 0);
	// // printf("printf: %d fprintf: %d\n\n", ret1, ret2);

	return (0);
}