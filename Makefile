# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfrisby <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/25 14:11:39 by mfrisby           #+#    #+#              #
#    Updated: 2017/05/31 14:06:06 by mfrisby          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	ft_printf

SRC = 	main.c \
		libftprintf/libftprintf.a \

OBJ = 	$(SRC:.c=.o)

INCLUDE = -I ./

FLAG =	#-Wall -Wextra -Werror -g

INC_FILE = include/ft_printf.h libft/libft.h libftprintf/libftprintf.h

all: $(NAME)

$(NAME):
	@make -C libftprintf
	@gcc $(FLAG) $(SRC) $(INCLUDE) -o $(NAME)
	@echo "\033[32mCompilation OK\033[m"

clean:
	@rm -rf $(OBJ)
	@rm -rf ft_printf.dSYM
	@make -C libftprintf/ clean
	@echo "\033[33mclean done\033[m"

fclean: 		clean
	@make -C ./libftprintf fclean
	@/bin/rm -f $(NAME)
	@echo "\033[33mfclean done\033[m"

re: 			fclean all

.PHONY = 		all clean fclean re