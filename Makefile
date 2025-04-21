CC = cc
CFLAGS = -Wall -Wextra -Werror
EXTRA_FLAGS = -c -I.
NAME = libftprintf.a
A_C = ar rcs
FILES = ft_printf.c ft_putchar.c ft_putnbr_base_ptr.c ft_putnbr_base.c ft_putptr.c ft_putstr.c ft_strlen.c
OBJS = $(FILES:.c=.o)
OBJS_BONUS = $(FILES_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(A_C) $(NAME) $(OBJS)

clean:
		rm -rf $(OBJS) $(OBJS_BONUS)

fclean: clean
				rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re