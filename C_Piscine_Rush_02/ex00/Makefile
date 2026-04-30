NAME = rush-02

SRCS = main.c  utils.c parse_dict.c numbers.c
OBJS = $(SRCS:.c=.o)
HEADER = rush02.h

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re