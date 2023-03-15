# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsaporos <lsaporos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 15:13:37 by lsaporos          #+#    #+#              #
#    Updated: 2022/11/14 15:30:26 by lsaporos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf_printer_char.c ft_printf_printer.c ft_printf_utils.c ft_printf.c

OBJS = ${SRC:.c=.o}

CC = gcc
AR = ar
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $(OBJS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re