# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvillavi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/26 18:47:40 by mvillavi          #+#    #+#              #
#    Updated: 2025/02/26 18:47:43 by mvillavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = Printf.h

SRCS = Printf.c Printf_utils.c Printf_utils_aux.c

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
