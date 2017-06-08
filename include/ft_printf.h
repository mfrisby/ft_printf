/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 18:42:56 by mfrisby           #+#    #+#             */
/*   Updated: 2016/08/13 11:19:48 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include "../libftprintf/libftprintf.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct	s_env
{
	char		result[4000];
	size_t		size;
	int			i;
	char		type;
	int			nb_arg;
	int			flag_plus;
	int			flag_diese;
	int			flag_moins;
	int			flag_space;
	int			flag_zero;
	int			precision;
}				t_env;

typedef struct	s_map
{
	void		*key;
	void		*value;
}				t_map;

int				ft_printf(const char *restrict format, ...);
#endif
