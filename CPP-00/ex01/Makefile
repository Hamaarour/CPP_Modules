# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 13:02:19 by hamaarou          #+#    #+#              #
#    Updated: 2023/06/30 13:02:19 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= PhoneBook
CC=c++
FLAGS= -Wall -Wextra -Werror -std=c++98

SRC= PhoneBook.cpp Contact.cpp main.cpp 

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