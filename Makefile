NAME = webserver

SRCS = src/*.cpp \
			 src/utils/*.cpp \
			 *.cpp

CFLAGS = -Wall -Wextra -Werror -g

CC = c++

RM = rm -rf

all: $(NAME)

$(NAME): $(SRCS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

re: fclean all

clean:
	$(RM) *.o *.dSYM

fclean: clean
	$(RM) $(NAME) *.dSYM
