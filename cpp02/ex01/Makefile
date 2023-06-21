SRC =	main.cpp Fixed.cpp

CC = c++

CPPFLAGS = -Wextra -Wall -Werror -std=c++98

OBJ = $(SRC:.cpp=.o)

NAME = Fixed

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CCPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re