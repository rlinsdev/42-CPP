NAME = megaphone

# Compilation
CC = c++ -g3
CFLAGS = -std=c++98
#TODO: Descomentar com as flags de erro
# CFLAGS = #-Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

run:
	make && ./megaphone

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
