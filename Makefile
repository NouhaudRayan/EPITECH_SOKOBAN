##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

SRC =	$(wildcard *.c)					\
		$(wildcard chained_list/*.c)	\
		$(wildcard src/*.c)

OBJ		=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS	=	-I./include/ -g

LDFLAGS	=	-L./lib/ -lmy -lncurses

all:	$(NAME)

$(NAME):	$(OBJ) lib/libmy.a
			$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CDFLAGS)

clean:
		$(RM) ./lib/my/*~
		$(RM) *~
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)
		$(RM) ./lib/libmy.all

re:		fclean all

lib/libmy.a:
		$(MAKE) -C ./lib/my/

.Phony: all clean fclean re