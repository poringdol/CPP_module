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
	  AWeapon.hpp.cpp \
	  PlasmaRifle.cpp \
	  PowerFist.cpp \
	  Enemy.cpp \
	  SuperMutant.cpp \
	  RadScorpion.cpp \
	  Character.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = AWeapon.hpp.hpp \
	  PlasmaRifle.hpp \
	  PowerFist.hpp \
	  Enemy.hpp \
	  SuperMutant.hpp \
	  RadScorpion.hpp \
	  Character.hpp

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