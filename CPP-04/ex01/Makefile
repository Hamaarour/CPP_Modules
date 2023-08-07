NAME=Animal
CC=c++
CFLAGS=-Wall -Wextra -Werror -std=c++98
RM=rm -rf
FILES=main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp 
OBJ=$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re
