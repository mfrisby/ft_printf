/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:09:43 by mfrisby           #+#    #+#             */
/*   Updated: 2017/07/11 13:09:45 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_atoi(const char *str)
{
	int		c;
	int		nb;
	int		is_neg;

	c = 0;
	nb = 0;
	is_neg = 0;
	while (str[c] == '\n' || str[c] == ' ' || str[c] == '\t' || str[c] == '\v'
			|| str[c] == '\r' || str[c] == '\f')
		c++;
	if (str[c] == '-')
		is_neg = 1;
	if (str[c] == '-' || str[c] == '+')
		c++;
	while (str[c] >= '0' && str[c] <= '9' && str[c] != '\0')
	{
		nb = nb * 10 + (str[c] - '0');
		c++;
	}
	if (is_neg == 1)
		nb = -nb;
	return (nb);
}
