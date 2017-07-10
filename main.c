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
#include <stdio.h>
#include <time.h>
int		main(int ac, char **av)
{
	clock_t c1;
	clock_t start1;
	clock_t c;
	clock_t start;

	start = clock();
	printf("hey %100.3s %-30.45d\n", "coucou", 42);
	c = clock();
	printf("printf: %Lf\n", (long double)(c - start));
	start1 = clock();
	ft_printf("hey %100.3s %-30.45d\n", "coucou", 42);
	c1 = clock();

	printf("ft_printf: %Lf\n", (long double)(c1 - start1));
	
	return (0);
}