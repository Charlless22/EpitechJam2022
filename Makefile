##
## EPITECH PROJECT, 2021
## MakeFile
## File description:
## Compil Programm
##

SRC	=	./src/main.c\				\
		./src/init.c\
		./src/quizz.c\


OBJ	=	$(SRC:.c=.o)

NAME	=	JAM_QUIZZ

FLAGS	=	-Wall -Wextra -g3 -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o 	$(NAME) $(OBJ) $(FLAGS)
clean:
	rm -f	$(OBJ)

fclean:	clean
	rm -f 	$(NAME)

re:	fclean all
