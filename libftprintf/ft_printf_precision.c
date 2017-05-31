/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 12:57:44 by mfrisby           #+#    #+#             */
/*   Updated: 2016/08/11 15:20:48 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf_precision(int *start, char *string)
{
	int i;
	char	*newstring;

	i = 0;
	newstring = NULL;
	while (string[i] != '\0' && ft_isdigit(string[i]) == 1)
	{
		i++;
	}
	newstring = ft_strsub(string, *start, (i - *start));
	*start = i;
	return (ft_atoi(newstring));
}
