SRC = main.cpp

CC = c++

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wextra -Wall -Werror -std=c++98

NAME = replace

all : $(NAME)

$(NAME) : $(OBJ)
		  $(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re