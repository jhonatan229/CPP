NAME = megaphone

all: $(NAME)

CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=leak

CC = c++

$(NAME): 
	$(CC) $(CFLAGS) ./megaphone.cpp -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean all