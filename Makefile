NAME = libftprintf.a

SRC = 	ft_dprintf.c ft_sprintf.c ft_vprintf.c ft_vdprintf.c ft_printf.c ft_fprintf.c\
	  	ft_printf_modulo.c ft_printf_special_char.c ft_printf_buffer_flush.c \
		ft_printf_add_to_buffer.c ft_printf_length.c ft_printf_parser.c\
	  	ft_printf_s.c ft_printf_smaj.c ft_printf_p.c ft_printf_putflags.c\
		ft_printf_di.c ft_printf_dmaj.c ft_printf_cmaj.c ft_printf_precision.c ft_printf_conversion.c \
		ft_printf_omaj.c ft_printf_o.c ft_printf_u.c ft_putchar_fd.c\
		ft_printf_umaj.c ft_printf_x.c ft_printf_xmaj.c ft_printf_c.c ft_strdel.c\
		ft_strsub.c ft_atoi.c ft_tolower.c ft_strcmp.c ft_strdup.c ft_itoa.c ft_putstr_fd.c\
		ft_putstr.c ft_putchar.c ft_strlen.c ft_strnew.c ft_strjoin.c ft_isdigit.c ft_strcpy.c \
		ft_printf_remove_min.c ft_printf_unicode.c ft_printf_b.c\
		ft_stoa_base.c ft_utoa_base.c ft_toupper.c ft_printf_getspace.c ft_strjoin_free.c\

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
