SHELL = /bin/sh

CC = clang++
RM = rm -rf
FLAGS = -Wall -Werror -Wextra -g

NAME = phonebook
SRC = phonebook.cpp \
	  Contact.class.cpp \
	  Phonebook.class.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(FLAGS)
	
%.o: %.cpp
	$(CC) -c $< -o $@ $(FLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
