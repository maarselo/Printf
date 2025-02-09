NAME = libftprintf.a

HEADER = Printf.h

SRCS = Printf.c Printf_utils.c

OBJS = $(SRCS:.c=.o)


CC = cc
CC_LIB = ar -rcs
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf


all: $(NAME)

$(NAME): $(OBJS)
	$(CC_LIB) $(NAME) $(OBJS)

%.o:%.c $(HEADER) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
