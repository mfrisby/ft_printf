/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 16:56:44 by mfrisby           #+#    #+#             */
/*   Updated: 2016/08/11 16:56:23 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*fill_sun(int toto, char *sun, int zero)
{
	sun = ft_strnew(toto + 1);
	sun[toto +1] = '\0';
	while (toto > 0)
	{
		if (zero == 1)
			sun[toto] = '0';
		else
			sun[toto] = ' ';
		toto--;
	}
	return (sun);
}

char	*ft_printf_width(char *moon, char *result, int *i)
{
	char	*sun;
	int 	start;
	int		mynbint;
	int		zero;

	start = *i;
	mynbint = 0;
	sun = NULL;
	zero = 0;
	if (moon[*i] == 0)//fill with zero or blank
	{
		zero = 1;
		(*i)++;
	}
	start = *i;
	while (moon[*i] != '\0' && ft_isdigit(moon[*i]) == 1)
	{
		(*i)++;
	}
	mynbint = ft_atoi(ft_strsub(moon, start, (*i - start)));
	sun = fill_sun(mynbint, sun, zero);
	result = ft_strjoin(result, sun);
	return (result);
}
