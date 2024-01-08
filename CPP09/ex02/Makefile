
NAME = PmergeMe

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp PmergeMe.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) PmergeMe.hpp
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	
clean :
	rm -rf $(OBJ)
	
fclean : clean
	rm -rf $(NAME)

re : fclean all

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@