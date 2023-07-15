# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/14 22:32:29 by hamaarou          #+#    #+#              #
#    Updated: 2023/07/14 22:33:32 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= file
CC= c++
SRC= main.cpp file.cpp
OBJ= $(SRC:.cpp=.o)
CFLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
