/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysan-seb <ysan-seb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 14:43:54 by mfrisby           #+#    #+#             */
/*   Updated: 2017/06/27 17:13:43 by ysan-seb         ###   ########.fr       */
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

void    			ft_printf_special_char(t_env *e, char *format);
char				*ft_printf_itoabase(unsigned int nbr, int base);
char				*ft_printf_itoabase_si(signed int nbr, int base);
char				*ft_printf_str_reverse(char *str);
void    			ft_printf_modulo(t_env *e, char *format);
/** FLAGS **/
int					ft_printf_precision(t_env *e, char *format);
char				*ft_printf_width(char *moon, char *result, int *i);
int	    			ft_printf_length(t_env *e, char *format);
/** CONVERSION **/
int	    			ft_printf_conversion(t_env *e, char c);
void     			ft_printf_s(t_env *);
void     			ft_printf_smaj(void);
void     			ft_printf_p(void);
void     			ft_printf_di(t_env *e);
void     			ft_printf_dmaj(void);
void     			ft_printf_omaj(void);
void     			ft_printf_o(void);
void     			ft_printf_u(void);
void     			ft_printf_umaj(void);
void    			ft_printf_x(t_env *e);
void    			ft_printf_xmaj(t_env *e);
void     			ft_printf_c(t_env *e);
void     			ft_printf_cmaj(void);
/** BUFFER **/
void 				ft_printf_add_to_buffer(t_env *e, char *s, int start);
void    			ft_printf_buffer_flush(t_env *e);

#endif
