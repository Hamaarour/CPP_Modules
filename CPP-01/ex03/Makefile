# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamaarou <hamaarou@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 12:48:13 by hamaarou          #+#    #+#              #
#    Updated: 2023/07/11 12:52:06 by hamaarou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = Weapon
CC = c++
FLAGS = -Wall -Wextra -Werror
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(Name)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(Name)

re: fclean all

.PHONY: all clean fclean re
