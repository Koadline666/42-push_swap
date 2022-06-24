# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 10:20:27 by afenzl            #+#    #+#              #
#    Updated: 2022/06/24 13:10:00 by afenzl           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM := rm -f

SRC = main.c check_input.c ft_error.c ft_atoi_ps.c free.c
OBJ = $(SRC:.c=.o)

BONSRC = 
BONOBJ = $(BONSRC:.c=.o)

LIBFT = libft/libs.a
LIBFTSRC = #how do you check if those files changed??

all: $(NAME)

$(NAME): $(OBJ) $(LIBFTSRC)
	make -C ./libft
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

bonus: $(BONOBJ) $(LIBFTSRC)
	make -C ./libft
	$(CC) $(CFLAGS) $(LIBFT) $(BONOBJ) -o $(NAME)

clean:
	make fclean -C ./libft/
	$(RM) $(OBJ) $(BONOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
