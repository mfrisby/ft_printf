/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:18:23 by mfrisby           #+#    #+#             */
/*   Updated: 2017/07/11 13:18:24 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s) || len > (ft_strlen(s) - start))
		return (NULL);
	str = ft_strnew(len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len + start)
	{
		if (i >= start)
			str[i - start] = s[i];
		i++;
	}
	return (str);
}
