SHELL = /bin/sh

B&W = \033[0;0m
RED  = \033[0;31m
GREEN = \033[0;32m
PURPLE = \033[0;35m

CC = clang++
RM = rm -rf
FLAGS = -Wall -Werror -Wextra -g

NAME = claptrap
SRC = main.cpp \
	  FragTrap.class.cpp \
	  ScavTrap.class.cpp \
	  ClapTrap.class.cpp \
	 NinjaTrap.class.cpp \
	 SuperTrap.class.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = FragTrap.class.hpp \
		 ScavTrap.class.hpp \
		 ClapTrap.class.hpp \
		NinjaTrap.class.hpp \
		SuperTrap.class.hpp
		 

all: $(NAME)

$(NAME):
	@$(CC) $(SRC) -o $(NAME) $(FLAGS)
	@echo "$(GREEN)  Executable $(PURPLE)$(NAME) $(GREEN)created  $(B&W)"
	
%.o: %.cpp $(HEADER)
	@$(CC) -c $< -o $@ $(FLAGS)
	@echo "$(GREEN)  Object file $(PURPLE)$@ $(GREEN)created  $(B&W)"

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re