NAME=Animal
CC=c++
CFLAGS=-Wall -Werror -Wextra -std=c++98
SRC=main.cpp Animal.cpp Dog.cpp Cat.cpp
OBJ=$(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
