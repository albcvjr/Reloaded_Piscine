NAME = ft_display_file

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_display_file.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean

all: $(NAME)

$(NAME): $(OBJS)
	$(CC)	$(CFLAGS)	$(OBJS) -o	$(NAME)

%.o: %.c
	$(CC)	$(CFLAGS) -c $< -o $@

clean:
	rm -f	$(OBJS)

fclean: clean
	rm -f	$(NAME)