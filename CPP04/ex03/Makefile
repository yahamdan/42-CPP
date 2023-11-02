NAME = Interface

CC = c++

FLAGS = -Wall -Wextra -Werror  -std=c++98 -fsanitize=address -g3

SRC = main.cpp Cure.cpp Ice.cpp Character.cpp MateriaSource.cpp AMateria.cpp node.cpp linkedList.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@