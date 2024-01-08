
NAME = Span

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Span.cpp 

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) Span.hpp
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
	
re : fclean all

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@