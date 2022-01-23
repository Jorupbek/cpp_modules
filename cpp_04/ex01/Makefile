CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME			= Brain
SRCS 			= main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
OBJS			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):$(SRCS)
		$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY:			all clean fclean re