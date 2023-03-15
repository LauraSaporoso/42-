# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 11:52:08 by lsaporos          #+#    #+#              #
#    Updated: 2022/11/08 14:14:56 by lsaporos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c\
ft_strlen.c ft_memset.c ft_bzero.c ft_tolower.c ft_toupper.c ft_strchr.c\
ft_strrchr.c ft_strncmp.c ft_memmove.c ft_strlcpy.c ft_strnstr.c ft_strlcat.c\
ft_memcpy.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c\
ft_calloc.c ft_substr.c ft_strjoin.c ft_strjoin.c ft_strtrim.c ft_split.c\
ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
ft_putendl_fd.c ft_putnbr_fd.c

BONUSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
ft_lstmap.c

OBJS = ${SRC:.c=.o}

BONUOBJS = ${BONUSRC:.c=.o}

CC = gcc
AR = ar
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $(OBJS)

bonus: $(BONUOBJS)
	$(AR) -rcs $(NAME) $(BONUOBJS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re