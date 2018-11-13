# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: popanase <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 14:26:53 by popanase          #+#    #+#              #
#    Updated: 2018/05/03 12:45:26 by popanase         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = popanase.filler

SRC = filler.c play.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	gcc -Wall -Wextra -Werror $^ -L./libft -lft -o $@
	
%.o: %.c
	gcc -Wall -Wextra -Werror -c $<

clean: 
	make clean -C libft
	rm -f $(OBJ)

fclean: clean 
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re popanase.filler
