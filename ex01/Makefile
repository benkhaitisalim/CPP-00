NAME = PhoneBook
CC = c++
SRC = PhoneBook.cpp main.cpp contact.cpp
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)
all: $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
%.o : %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all
