SHELL = /bin/sh

B&W = \033[0;0m
RED  = \033[0;31m
GREEN = \033[0;32m
PURPLE = \033[0;35m

CC = clang++ -std=c++98
RM = rm -rf
FLAGS = -Wall -Werror -Wextra -g

NAME = war
SRC = main.cpp \
	  AWeapon.class.cpp \
	  PlasmaRifle.class.cpp \
	  PowerFist.class.cpp \
	  Enemy.class.cpp \
	  SuperMutant.class.cpp \
	  RadScorpion.class.cpp \
	  Character.class.cpp
OBJS = $(SRC:.cpp=.o)
OBJDIR = ./objects/
OBJ = $(addprefix $(OBJDIR), $(OBJS))
HEADER = AWeapon.class.hpp \
	  PlasmaRifle.class.hpp \
	  PowerFist.class.hpp \
	  Enemy.class.hpp \
	  SuperMutant.class.hpp \
	  RadScorpion.class.hpp \
	  Character.class.hpp

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(FLAGS)
	@echo "$(GREEN)  Executable $(PURPLE)$(NAME) $(GREEN)created  $(B&W)"
	
$(OBJDIR)%.o: %.cpp $(HEADER)
	@test -d $(OBJDIR) || mkdir $(OBJDIR)
	@$(CC) -c $< -o $@ $(FLAGS)
	@echo "$(GREEN)  Object file $(PURPLE)$@ $(GREEN)created  $(B&W)"

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re