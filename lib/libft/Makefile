CC = gcc
FLAGS = -Wall -Wextra -Werror
SRCS = ft*.c
MAIN = main.c
NAME = libft.a

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRCS)
		ar rc libft.a *.o
			ranlib libft.a

clean:
	rm -f *.o

fclean: clean
	rm -f *.a

re: fclean all