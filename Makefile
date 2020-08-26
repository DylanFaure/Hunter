##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles libmy
##

SRC	=	src/main.c	\
		src/error1.c	\
		src/end1.c	\
		src/end2.c	\
		src/gestion_mouse.c	\
		src/put_gyarados.c	\
		src/maj.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *~
	rm -f *#
	rm -f src/*~
	rm -f src/*#
	rm -f src/*.o
	rm -f include/*~
	rm -f include/*#

re:	fclean all
