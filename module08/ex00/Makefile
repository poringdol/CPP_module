SHELL = /bin/sh

B&W = \033[0;0m
RED  = \033[0;31m
GREEN = \033[0;32m
PURPLE = \033[0;35m

CC = clang++ -std=c++98
# CC = clang++
RM = rm -rf
FLAGS = -Wall -Werror -Wextra -g

NAME = find
SRC = main.cpp

OBJS = $(SRC:.cpp=.o)
OBJDIR = ./objects/
OBJ = $(addprefix $(OBJDIR), $(OBJS))
DEP = $(OBJ:.o=.d)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(FLAGS)
	@echo "$(GREEN)  Executable $(PURPLE)$(NAME) $(GREEN)created  $(B&W)"

-include $(DEP)

$(OBJDIR)%.o: %.cpp
	@test -d $(OBJDIR) || mkdir $(OBJDIR)
	@$(CC) -c $< -o $@ $(FLAGS) -MMD
	@echo "$(GREEN)  Object file $(PURPLE)$@ $(GREEN)created  $(B&W)"

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re