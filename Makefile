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

NAME =		ft_printf

SRC =	 	src/main.c \
			src/ft_printf.c \
			libft/libft.a \
			libftprintf/libftprintf.a \

#OBJ = 	$(SRC:.c=.o)
OBJ = 		$(patsubst src/%.c, obj/%.o, $(SRC))

INCLUDE = 	-I ./include

FLAG =		-Wall -Wextra -Werror -g

INC_FILE = 	include/ft_printf.h libft/libft.h libftprintf/libftprintf.h

all: 		$(NAME)

$(NAME): 	obj $(OBJ)
			@make -C libft
			@make -C libftprintf
			@gcc $(FLAG) -o $(NAME) $(OBJ) 
		#	@gcc $(FLAG) $(SRC) $(INCLUDE) -o $(NAME)
			@echo "\033[32mCompilation OK\033[m"


obj/%.o:	%.c
			@gcc $(FLAG) $(INCLUDE) -o $(OBJ) -c $(SRC)

obj:
			@mkdir -p obj

clean:
			@rm -rf obj
			@rm -rf ft_printf.dSYM
			@make -C libft/ clean
			@make -C libftprintf/ clean
			@echo "\033[33mclean done\033[m"

fclean: 	clean
			@make -C ./libft fclean
			@make -C ./libftprintf fclean
			@/bin/rm -f $(NAME)
			@echo "\033[33mfclean done\033[m"

re: 			fclean all

.PHONY = 		all clean fclean re
