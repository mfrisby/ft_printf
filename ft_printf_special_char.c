/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_special_char.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:14:37 by mfrisby           #+#    #+#             */
/*   Updated: 2017/07/11 13:14:38 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int		ft_printf_find_char(t_env *e, char c)
{
	if (c == 92)
		e->result[e->size] = 92;
	else if (c == 34)
		e->result[e->size] = 34;
	else if (c == 39)
		e->result[e->size] = 39;
	else if (c == 63)
		e->result[e->size] = 63;
	else if (c == 110)
		e->result[e->size] = 10;
	else if (c == 98)
		e->result[e->size] = 8;
	else if (c == 114)
		e->result[e->size] = 13;
	else if (c == 97)
		e->result[e->size] = 7;
	else if (c == 102)
		e->result[e->size] = 12;
	else if (c == 118)
		e->result[e->size] = 11;
	else if (c == 116)
		e->result[e->size] = 9;
	else
		return (0);
	return (1);
}

void			ft_printf_special_char(t_env *e, char *format)
{
	char	c;

	if (!format[e->i + 1])
		return ;
	c = format[e->i + 1];
	if (ft_printf_find_char(e, c) == 1)
	{
		e->size++;
		e->i += 2;
	}
}
