SHELL = /bin/sh

B&W = \033[0;0m
RED  = \033[0;31m
GREEN = \033[0;32m
PURPLE = \033[0;35m

CC = clang++ -std=c++98
RM = rm -rf
FLAGS = -Wall -Werror -Wextra -g

NAME = polymorph
SRC = main.cpp \
	  Sorcerer.class.cpp \
	  Victim.class.cpp \
	  Peon.class.cpp \
	  Dupe.class.cpp \
	  Fool.class.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Sorcerer.class.hpp \
	 	 Victim.class.hpp \
		 Peon.class.hpp \
		 Dupe.class.hpp \
		 Fool.class.hpp

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(FLAGS)
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