# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ysan-seb <ysan-seb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/09 15:14:15 by mfrisby           #+#    #+#              #
#    Updated: 2017/07/06 13:09:45 by ysan-seb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf_precision.c ft_printf_conversion.c ft_printf_width.c \
	  	ft_printf_modulo.c ft_printf_special_char.c ft_printf_buffer_flush.c \
		ft_printf_add_to_buffer.c ft_printf_length.c ft_printf_parser.c\
	  	ft_printf_s.c ft_printf_smaj.c ft_printf_p.c \
		ft_printf_di.c ft_printf_dmaj.c ft_printf_cmaj.c \
		ft_printf_omaj.c ft_printf_o.c ft_printf_u.c ft_printf.c \
		ft_printf_umaj.c ft_printf_x.c ft_printf_xmaj.c ft_printf_c.c \
		ft_printf_str_reverse.c ft_printf_itoabase.c  ft_printf_itoabase_si.c \
		ft_printf_itoabase_si.c ft_printf_itoabase_uli.c ft_printf_itoabase_sli.c\
		ft_strsub.c ft_atoi.c ft_putnbr.c ft_tolower.c ft_strcmp.c ft_memset.c ft_bzero.c ft_strdup.c ft_itoa.c\
		ft_putstr.c ft_putchar.c ft_strlen.c ft_strnew.c ft_strjoin.c ft_isdigit.c ft_strcpy.c ft_putendl.c\
		ft_printf_remove_min.c ft_printf_checkfield.c ft_printf_checkdiesezeroflag.c ft_printf_unicode.c\
		ft_printf_ml.c ft_printf_ml_l.c ft_printf_ml_ll.c ft_printf_ml_h.c ft_printf_ml_hh.c ft_printf_ml_j.c ft_printf_ml_z.c\
		ft_printf_stoa_base.c ft_printf_utoa_base.c \

OBJS = $(SRC:.c=.o)

FLAG = #-Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc -c $(FLAG) $(SRC)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJS)

fclean:	clean
	@rm -f $(NAME)

norme: 
	norminette $(SRC)

re: fclean all

.PHONY = all clean fclean norme re
