NAME = Serializer

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address  

SRC = main.cpp Serializer.cpp

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