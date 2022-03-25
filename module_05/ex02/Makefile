NAME = bureaucrat

all: $(NAME)

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=leak
FILES = ./main.cpp ./Bureaucrat.cpp ./Form.cpp ./RobotomyRequestForm.cpp ./ShrubberyCreationForm.cpp ./PresidentialPardonForm.cpp

CC = c++

$(NAME): 
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean all