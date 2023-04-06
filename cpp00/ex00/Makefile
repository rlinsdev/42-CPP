NAME = megaphone

# Compilation
# CC = g++
CC = c++
CFLAGS = -std=c++98 -g3
CFLAGS = #-Wall -Wextra -Werror -std=c++98 -g3
# CFLAGS = -Wall -Wextra -Werror

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

run1:
	./megaphone

run2:
	./megaphone abc abc

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
