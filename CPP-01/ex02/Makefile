# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 10:11:02 by hamaarou          #+#    #+#              #
#    Updated: 2023/07/11 10:11:02 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =main
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)


clean:
	rm -rf $(OBJ)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re