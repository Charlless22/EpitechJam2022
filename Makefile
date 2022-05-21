##
## EPITECH PROJECT, 2021
## MakeFile
## File description:
## Compil Programm
##

SRC	=	./src/main.c\
		./src/init.c\
		./src/quizz.c\
		./src/destroy.c\
		./src/draw.c\
		./src/events.c\


OBJ	=	$(SRC:.c=.o)

NAME	=	jam_quizz

FLAGS	=	-Wall -Wextra -g3 -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o 	$(NAME) $(OBJ) $(FLAGS)
clean:
	rm -f	$(OBJ)

fclean:	clean
	rm -f 	$(NAME)

re:	fclean all
