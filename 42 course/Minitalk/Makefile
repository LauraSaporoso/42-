# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsaporos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/15 10:54:13 by lsaporos          #+#    #+#              #
#    Updated: 2023/03/15 11:07:42 by lsaporos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= minitalk.a

SERVER			= server.c

SERVER_BONUS			= server_bonus.c

CLIENT			= client.c

CLIENT_BONUS			= client_bonus.c

OBJ_SERVER			= $(SERVER:.c=.o)

OBJ_SERVER_BONUS			= $(SERVER_BONUS:.c=.o)

OBJ_CLIENT			= $(CLIENT:.c=.o)

OBJ_CLIENT_BONUS 		= $(CLIENT_BONUS:.c=.o)

OBJ					= ./obj

SRC					= ./src

INC					= ./inc

LIBFT					= libft

GCC					= cc

CFLAGS					= -Wall -Wextra -Werror

RM					= rm -f

start:
			@make -C $(LIBFT)
			@cp $(LIBFT)/libft.a .
			@make all

all: $(NAME)

$()/%.o: $(SRC)/%.c
	$(GCC) $(CFLAGS) $< -I $(INC)	-o $@ libft.a

$(NAME): server client server_bonus client_bonus

server: $(SRC)/$(SERVER)
	$(GCC) $(CFLAGS) $< -I $(INC) -o server libft.a

client: $(SRC)/$(CLIENT)
	$(GCC) $(CFLAGS) $< -I $(INC) -o client libft.a

server_bonus: $(SRC)/$(SERVER_BONUS)
	$(GCC) $(CFLAGS) $< -I $(INC) -o server_bonus libft.a

client_bonus: $(SRC)/$(CLIENT_BONUS)
	$(GCC) $(CFLAGS) $< -I $(INC) -o client_bonus libft.a

clean:
	$(RM) $(OBJ)/*
	@make clean -C $(LIBFT)

fclean: clean
	$(RM) $OBJ/* $(LIBFT)/libft.a libft.a server client server_bonus client_bonus

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re
.SILENT:
