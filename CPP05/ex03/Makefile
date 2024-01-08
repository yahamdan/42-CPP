NAME = Bureaucrat

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp  RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	
clean : 
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)
	rm  -f *_shrubbery

re : fclean all

%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@