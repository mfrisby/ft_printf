/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:07:01 by mfrisby           #+#    #+#             */
/*   Updated: 2014/11/14 12:05:06 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putstr(char const *s)
{
	int i;

	if (s == NULL)
		return ;
	i = ft_strlen(s);
	write(1, s, i);
}
