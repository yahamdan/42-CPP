NAME = Random 

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Base.cpp A.cpp B.cpp C.cpp

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