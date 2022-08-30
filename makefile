CC = gcc
FLAGS = -Wall -Wextra -Werror 
SRCS = ./flags/ft*.c ./srcs/*.c
TEMPFILES = ./tempFiles/*

NAME = libprintf.a

all: $(NAME)

$(NAME):
	make -C ./lib/libft/
	$(CC) $(FLAGS) -c $(SRCS)
	mkdir tempFiles
	mv *.o tempFiles
	ar rc $(NAME) $(TEMPFILES)
	ranlib $(NAME)

clean:
	make clean -C ./lib/libft/
	rm -f $(TEMPFILES)
	rm -R tempFiles

fclean:
	make fclean -C ./lib/libft/
	rm *.a
	make clean

re:	fclean all