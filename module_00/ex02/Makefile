NAME = teste

all: $(NAME)

CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME): 
	$(CFLAGS) ./Account.cpp ./tests.cpp -o $(NAME)

clean	:
			rm -rf $(NAME)

re		:	clean all

