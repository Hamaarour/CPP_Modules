# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 20:59:53 by hamaarou          #+#    #+#              #
#    Updated: 2023/07/06 20:59:53 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= zombie
CC=c++
FLAGS= -Wall -Wextra -Werror -std=c++98
SRC=  main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re

