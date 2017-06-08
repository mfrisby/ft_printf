/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 14:43:54 by mfrisby           #+#    #+#             */
/*   Updated: 2016/08/11 14:49:47 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "../libft/libft.h"
# include "../include/ft_printf.h"

//void	ft_printf_flags(char *string, t_env *e);
int		ft_printf_precision(int *start, char *string);
char	*ft_printf_width(char *moon, char *result, int *i);
int     ft_printf_o(int n);
char    ft_printf_modulo(int i, char *format);
char    ft_printf_special_char(int i, char *format);

#endif
