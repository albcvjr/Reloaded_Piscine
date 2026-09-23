NAME = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_display_file.c
OBJS = $(SRCS:.C=.O)

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.O = %.C
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

