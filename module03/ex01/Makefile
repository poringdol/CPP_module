SHELL = /bin/sh

B&W = \033[0;0m
RED  = \033[0;31m
GREEN = \033[0;32m
PURPLE = \033[0;35m

CC = clang++ -std=c++98
RM = rm -rf
FLAGS = -Wall -Werror -Wextra -g
# FLAGS = -g
NAME = claptrap
SRC = main.cpp \
	  FragTrap.class.cpp \
	  ScavTrap.class.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(FLAGS)
	@echo "$(GREEN)  Executable $(PURPLE)$(NAME) $(GREEN)created  $(B&W)"
	
%.o: %.cpp
	@$(CC) -c $< -o $@ $(FLAGS)
	@echo "$(GREEN)  Object file $(PURPLE)$@ $(GREEN)created  $(B&W)"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re