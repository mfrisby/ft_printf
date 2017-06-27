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
#include <stdio.h>
#include <stdarg.h>

typedef struct		s_env
{
	char			result[4000];
	size_t			size;
	size_t			index;
	int				i;
	char			type;
	int				nb_arg;
	int				flag_plus;
	int				flag_diese;
	int				flag_moins;
	int				flag_space;
	int				flag_zero;
	int				precision;
	int				precision_in_arg;
	int				field_width;
	va_list			pa;
}					t_env;


void     			ft_printf_s(t_env *);
void     			ft_printf_smaj(void);
void     			ft_printf_p(void);
void     			ft_printf_di(void);
void     			ft_printf_dmaj(void);
void     			ft_printf_omaj(void);
void     			ft_printf_o(void);
void     			ft_printf_u(void);
void     			ft_printf_umaj(void);
void     			ft_printf_xx(void);
void     			ft_printf_c(void);
void     			ft_printf_cmaj(void);
int					ft_printf_precision(t_env *e, char *format);
char				*ft_printf_width(char *moon, char *result, int *i);
void    			ft_printf_modulo(t_env *e, char *format);
void    			ft_printf_special_char(t_env *e, char *format);
void    			ft_printf_buffer_flush(t_env *e);
int	    			ft_printf_conversion(t_env *e, char c);

#endif
