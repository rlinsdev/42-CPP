NAME = phonebook

# Compilation
CC = c++ -g3
CFLAGS = -std=c++98
#TODO: Descomentar com as flags de erro
# CFLAGS = #-Wall -Wextra -Werror -std=c++98

SRC_PATH = ./sources/
OBJ_PATH = ./objects/
INC_PATH = ./includes/

SRC = main.cpp

SRCS 	= $(addprefix $(SRC_PATH), $(SRC))
OBJ 	= $(SRC:.cpp=.o)
OBJS	= $(addprefix $(OBJ_PATH), $(OBJ))
INC		= -I $(INC_PATH)

all: $(OBJ_PATH) $(NAME)

# Objects directory rule
#"-p" option ensures that the command creates any necessary parent directories as well, if they don't already exist.
$(OBJ_PATH):
	mkdir -p $(OBJ_PATH)

# Objects rule
$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

# Project file rules
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@ $(INC)

run:
	make && ./phonebook

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
