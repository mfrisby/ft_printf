/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cmaj.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:11:05 by mfrisby           #+#    #+#             */
/*   Updated: 2017/07/11 13:32:02 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <wchar.h>

static void		ft_printf_nullchar(t_env *e)
{
	ft_printf_buffer_flush(e);
	e->size++;
	if (e->family == 0)
		ft_putchar(0);
}

void			ft_printf_cmaj(t_env *e)
{
	char	*tmp;
	int		ret;
	wint_t	cw;

	if (MB_CUR_MAX <= 1)
		exit(-1) ;
	tmp = ft_strnew(5);
	cw = va_arg(e->pa, wint_t);
	ret = 0;
	if (cw == 0)
		ft_printf_nullchar(e);
	else if (cw <= 127)
	{
		tmp[0] = (char)cw;
		tmp[1] = '\0';
		ft_printf_add_to_buffer(e, tmp, 0);
	}
	else
	{
		ret = ft_printf_unicode((unsigned char*)tmp, cw);
		tmp[ret] = '\0';
		ft_printf_add_to_buffer(e, tmp, 0);
	}
	ft_strdel(&tmp);
}
