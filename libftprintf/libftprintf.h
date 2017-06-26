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

typedef struct		s_env
{
	char			result[4000];
	size_t			size;
	int				i;
	char			type;
	int				nb_arg;
	int				flag_plus;
	int				flag_diese;
	int				flag_moins;
	int				flag_space;
	int				flag_zero;
	int				precision;
}					t_env;


int					ft_printf_precision(int *start, char *string);
char				*ft_printf_width(char *moon, char *result, int *i);
void    			ft_printf_modulo(t_env *e, char *format);
void    			ft_printf_special_char(t_env *e, char *format);
void    			ft_printf_buffer_flush(t_env *e);
void    			ft_printf_conversion();
/**			CONVERSION        **/

void     			ft_printf_s();
void     			ft_printf_smaj();
void     			ft_printf_p();
void     			ft_printf_di();
void     			ft_printf_dmaj();
void     			ft_printf_omaj();
void     			ft_printf_o();
void     			ft_printf_u();
void     			ft_printf_umaj();
void     			ft_printf_xx();
void     			ft_printf_c();
void     			ft_printf_cmaj();

#endif
