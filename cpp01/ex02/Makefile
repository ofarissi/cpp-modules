SRC = main.cpp

CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

NAME = Brain

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
		$(RM) $(OBJ)

fclean : $(CLEAN)
		 $(RM) $(NAME)

re : $(FCLEAN) $(NAME)

.PHONY: all clean fclean re
