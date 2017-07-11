/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_buffer_flush.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:10:41 by mfrisby           #+#    #+#             */
/*   Updated: 2017/07/11 15:09:26 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printf_buffer_flush(t_env *e)
{
	e->result[e->index] = '\0';
	ft_putstr(e->result);
	e->index = 0;
	e->result[0] = '\0';
}
