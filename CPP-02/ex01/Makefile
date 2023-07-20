# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 07:59:06 by hamaarou          #+#    #+#              #
#    Updated: 2023/07/20 07:59:57 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Fixed.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
