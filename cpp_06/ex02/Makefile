NAME = identify
SRC = main.cpp Base.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
HEADERS = A.hpp B.hpp C.hpp Base.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re: fclean all