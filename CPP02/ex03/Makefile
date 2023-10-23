NAME = Fixed

CC = c++

FLAGS = -Wall -Wextra -Werror -fsanitize=address  -g3 -std=c++98

SRC = main.cpp Fixed.cpp Point.cpp bsp.cpp

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