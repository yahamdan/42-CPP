
NAME = Abomination

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) MutantStack.hpp
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
	
re : fclean all

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@