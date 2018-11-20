# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adlabban <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/12 23:26:39 by adlabban          #+#    #+#              #
#    Updated: 2018/03/24 00:37:23 by jhacquar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = ./baktrak.c \
	  ./main.c \
	  ./map.c \
	  ./map2.c \
	  ./checkform.c \
	  ./readfi.c \
	  ./valid_file.c \
	  ./parcing.c

OBJ = $(SRC:.c=.o)

INC = -I includes

CC = gcc

LIBFT = libft/libft.a

FLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	$(CC) $(FLAG) $(OBJ) -o $(NAME) $(LIBFT)

$(OBJ): $(LIBFT)
	$(CC) $(FLAG) -c $(SRC)

$(LIBFT):
	make -C libft/

clean:
	rm -f $(OBJ)
	make clean -C libft/

fclean: clean
	rm -f $(NAME)
	make fclean -C libft/

re: fclean all
