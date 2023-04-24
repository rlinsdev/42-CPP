NAME = phonebook

# Collors
RESET 	= \033[0m
GREEN 	= \033[0;32m
RED 	= \033[0;31m

# Compilation
CC = c++ -g3
CFLAGS = -std=c++98
#TODO: Descomentar com as flags de erro
# CFLAGS = #-Wall -Wextra -Werror -std=c++98

SRC_PATH = ./sources/
OBJ_PATH = ./objects/
INC_PATH = ./includes/

SRC = main.cpp PhoneBook.cpp

SRCS 	= $(addprefix $(SRC_PATH), $(SRC))
OBJ 	= $(SRC:.cpp=.o)
OBJS	= $(addprefix $(OBJ_PATH), $(OBJ))
INC		= -I $(INC_PATH)

#NO_PRINT	= --no-print-directory

all: $(OBJ_PATH) $(NAME)

# Objects directory rule
#"-p" option ensures that the command creates any necessary parent directories as well, if they don't already exist.
$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

# Objects rule
$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

# Project file rules
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@ $(INC)
	@echo "$(GREEN)Build Successful$(RESET)"

run:
	make && ./phonebook

clean:
	@echo "$(RED)Cleaning objects...$(RESET)"
	@rm -rf $(OBJ_PATH)
	@echo "$(GREEN)Done!$(RESET)"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
