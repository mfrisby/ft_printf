/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:06:00 by mfrisby           #+#    #+#             */
/*   Updated: 2014/11/14 16:25:29 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = (char*)s;
	i = 0;
	if (n != 0)
	{
		while (i < n)
		{
			ptr[i] = 0;
			i++;
		}
	}
}
