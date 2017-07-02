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

# include "libftprintf/libftprintf.h"
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int				ft_printf(const char *restrict format, ...);
#endif
