/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 13:28:42 by mfrisby           #+#    #+#             */
/*   Updated: 2017/07/11 15:16:21 by mfrisby          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_env
{
	int				fd;
	int				family;
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

int					ft_dprintf(int fd, const char *restrict format, ...);
int					ft_sprintf(const char *restrict str,
		const char *restrict format, ...);
int					ft_snprintf(const char *restrict str, size_t size,
		const char *restrict format, ...);
int					ft_vprintf(const char *restrict format, va_list ap);
int					ft_vdprintf(int fd, const char *restrict format,
		va_list ap);
int					ft_vsprintf(const char *restrict str,
		const char *restrict format, va_list ap);
int					ft_vsnprintf(const char *restrict str, size_t size,
		const char *restrict format, va_list ap);
int					ft_printf(const char *restrict format, ...);
void				ft_printf_special_char(t_env *e, char *format);
char				*ft_stoa_base(long long nb, int base);
char				*ft_utoa_base(unsigned long long nb, int base);
void				ft_printf_parser(t_env *e, char *format);
int					ft_printf_precision(t_env *e, char *format);
int					ft_printf_length(t_env *e, char *format);
size_t				ft_printf_unicode(unsigned char *const buffer,
		const unsigned int code);
int					ft_printf_conversion(t_env *e, char c);
void				ft_printf_s(t_env *e);
void				ft_printf_smaj(t_env *e);
void				ft_printf_p(t_env *e);
void				ft_printf_di(t_env *e);
void				ft_printf_dmaj(t_env *e);
void				ft_printf_omaj(t_env *e);
void				ft_printf_o(t_env *e);
void				ft_printf_u(t_env *e);
void				ft_printf_umaj(t_env *e);
void				ft_printf_x(t_env *e);
void				ft_printf_xmaj(t_env *e);
void				ft_printf_c(t_env *e);
void				ft_printf_cmaj(t_env *e);
void				ft_printf_modulo(t_env *e);
void				ft_printf_add_to_buffer(t_env *e, char *s, int start);
void				ft_printf_buffer_flush(t_env *e);
int					ft_toupper(int c);
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
void				ft_strdel(char **as);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putchar(char c);
void				ft_putchar_fd(char c, int fd);
char				*ft_strnew(size_t size);
char				*ft_strdup(const char *s1);
char				*ft_itoa(int n);
char				*remove_min(t_env *e, char *tmp);
void				ft_printf_putflags(t_env *e, char *s);
char				*getspace(t_env *e, char *space, char *s);
char				*ft_strjoin_free(char *s1, char *s2, int rm);

#endif
