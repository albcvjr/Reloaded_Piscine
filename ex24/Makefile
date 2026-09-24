NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_strlen.c \
	srcs/ft_swap.c

OBJS = $(SRCS:.c=.o)

INCLUDES = -I includes

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
