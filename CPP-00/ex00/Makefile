# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 10:40:54 by hamaarou          #+#    #+#              #
#    Updated: 2023/06/27 10:40:54 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= megaphone
CC=c++
FLAGS= -Wall -Wextra -Werror -std=c++98

SRC= megaphone.cpp

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
