##
## EPITECH PROJECT, 2021
## task01
## File description:
## task01
##

SRC			=	$(wildcard *.c)

OBJ			=	$(SRC:.c=.o)

MAKEFILE	=	my_runner

all:	$(MAKEFILE)

$(MAKEFILE):	$(OBJ)
	gcc -g -o $(MAKEFILE) $(OBJ) \
	-lcsfml-graphics -lcsfml-audio -lcsfml-system -lm

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(MAKEFILE)

re: fclean all
