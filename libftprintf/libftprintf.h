/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maki <maki@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 14:43:54 by mfrisby           #+#    #+#             */
/*   Updated: 2017/07/03 15:06:28 by maki             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

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
	int				neg;
	int				m_h;
	int				m_hh;
	int				m_l;
	int				m_ll;
	int				m_j;
	int				m_z;
	va_list			pa;
}					t_env;

void    			ft_printf_special_char(t_env *e, char *format);
char				*ft_printf_itoabase(unsigned int nbr, int base);
char				*ft_printf_itoabase_si(signed int nbr, int base);
char				*ft_printf_itoabase_uli(unsigned long nbr, int base);
char				*ft_printf_itoabase_sli(signed long nbr, int base);
char				*ft_printf_str_reverse(char *str);
void    			ft_printf_parser(t_env *e, char *format);
/** FLAGS **/
int					ft_printf_precision(t_env *e, char *format);
char				*ft_printf_width(char *moon, char *result, int *i);
int	    			ft_printf_length(t_env *e, char *format);
/** CONVERSION **/
int	    			ft_printf_conversion(t_env *e, char c);
void     			ft_printf_s(t_env *);
void     			ft_printf_smaj(t_env *e);
void     			ft_printf_p(t_env *e);
void     			ft_printf_di(t_env *e);
void     			ft_printf_dmaj(t_env *e);
void     			ft_printf_omaj(t_env *e);
void     			ft_printf_o(t_env *e);
void     			ft_printf_u(t_env *e);
void     			ft_printf_umaj(t_env *e);
void    			ft_printf_x(t_env *e);
void    			ft_printf_xmaj(t_env *e);
void     			ft_printf_c(t_env *e);
void     			ft_printf_cmaj(t_env *e);
void     			ft_printf_modulo(t_env *e);
/** BUFFER **/
void 				ft_printf_add_to_buffer(t_env *e, char *s, int start);
void    			ft_printf_buffer_flush(t_env *e);
/** LIBFT **/
void				ft_putendl(char const *s);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_isdigit(int c);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_tolower(int c);
int					ft_atoi(const char *str);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_itoa(int n);
size_t				ft_strlen(const char *s);
void				ft_putstr(char const *s);
void				ft_putchar(char c);
char				*ft_strnew(size_t size);
int					ft_printf(const char *restrict format, ...);
char				*ft_strdup(const char *s1);
char				*ft_itoa(int n);
/** MECANIQUE FLAG ZERO & MORE **/
char     			*remove_min(char *tmp);
void     			checkfield(t_env *e, char *tmp);
void     			checkdiesezeroflag(t_env *e, char *tmp);
#endif
