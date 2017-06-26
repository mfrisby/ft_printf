# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/09 15:14:15 by mfrisby           #+#    #+#              #
#    Updated: 2017/05/31 14:06:49 by mfrisby          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf_precision.c \
	  	ft_printf_width.c \
	  	ft_printf_modulo.c \
	  	ft_printf_special_char.c \
	  	ft_printf_buffer_flush.c \
	  	ft_printf_s.c ft_printf_smaj.c ft_printf_p.c \
		ft_printf_di.c ft_printf_dmaj.c ft_printf_cmaj.c \
		ft_printf_omaj.c ft_printf_o.c ft_printf_u.c \
		ft_printf_umaj.c ft_printf_xx.c ft_printf_c.c \

OBJS = $(SRC:.c=.o)

FLAG = -Wall -Wextra -Werror

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
