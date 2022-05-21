##
## EPITECH PROJECT, 2021
## MakeFile
## File description:
## Compil Programm
##

SRC	=	$(wildcard src/*.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	jam_quizz

FLAGS	=	-Wall -Wextra -g3 -lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o 	$(NAME) $(OBJ) $(FLAGS)
clean:
	rm -f	$(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
