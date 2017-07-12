/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:28:33 by mfrisby           #+#    #+#             */
/*   Updated: 2017/07/11 13:28:34 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	i;

	i = 0;
	i = ft_strlen(s1);
	new = malloc(sizeof(char) * (i + 1));
	if (new == NULL)
		return (NULL);
	new = ft_strcpy(new, s1);
	return (new);
}
