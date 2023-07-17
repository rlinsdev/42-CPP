NAME = 03-Bureaucrat

# Collors
RESET 	= \033[0m
GREEN 	= \033[0;32m
RED 	= \033[0;31m

# Compilation
CC = c++ -g3
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_PATH = ./sources/
OBJ_PATH = ./objects/
INC_PATH = ./includes/

SRC = 	main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp

#Check Leak memory
LEAK = valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes -s

SRCS 	= $(addprefix $(SRC_PATH), $(SRC))
OBJ 	= $(SRC:.cpp=.o)
OBJS	= $(addprefix $(OBJ_PATH), $(OBJ))
INC		= -I $(INC_PATH)

all: $(OBJ_PATH) $(NAME)

# Objects directory rule
$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

# Objects rule
$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

# Project file rules
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $@ $(INC)
	@echo "$(GREEN)Build Successful$(RESET)"

valgrind:
	$(LEAK) ./01-Maggots

clean:
	@echo "$(RED)Cleaning objects...$(RESET)"
	@rm -rf $(OBJ_PATH)
	@echo "$(GREEN)Done!$(RESET)"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean
