NAME = span

all: $(NAME)

CFLAGS = -Wall -Wextra -Werror -fsanitize=leak
FILES = ./main.cpp ./Span.cpp

CC = c++

$(NAME): 
	$(CC) $(CFLAGS) $(FILES) -o $(NAME)

clean:
	rm -rf $(NAME)

re:	clean all