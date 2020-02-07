##
## EPITECH PROJECT, 2020
## my_chat
## File description:
## Makefile
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS = -ggdb -g

NAME	=	server

$(NAME):	$(OBJ)
	gcc -o$(NAME) $(OBJ) -pthread

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

test run:
		./$(NAME)

.PHONY: all clean fclean re