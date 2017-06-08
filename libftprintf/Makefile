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

SRC = ft_printf_ouxx.c \
	  ft_printf_precision.c \
	  ft_printf_width.c \
	  ft_printf_modulo.c \
	  ft_printf_special_char.c \
	  ft_printf_buffer_flush.c \

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
