CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME			= account
SRCS			= Account.cpp tests.cpp
OBJS			= $(SRCS:.cpp=.o)

all:			$(NAME)

$(NAME):$(SRCS)
		$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY:			all clean fclean re