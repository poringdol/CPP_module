SHELL = /bin/sh

CC = g++
RM = rm -rf
FLAGS = -Wall -Werror -Wextra -g

NAME = violence
SRC = main.cpp  \
	  HumanA.cpp \
	  HumanB.cpp  \
	  Weapon.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(FLAGS)
	
%.o: %.cpp
	@$(CC) -c $< -o $@ $(FLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re