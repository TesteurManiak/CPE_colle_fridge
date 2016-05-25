##
## Makefile for makefile in /home/roux_l/rendu/fridge
## 
## Made by Guillaume Roux
## Login	 <roux_l@epitech.net>
## 
## Started on	Tue May	24 18:15:35 2016 Guillaume Roux
## Last update	Tue May	24 18:15:35 2016 Guillaume Roux
##

NAME	=	fridge

SRC		=	src/main.c \
				src/my_strncmp.c \
				src/get_next_line.c \
				src/my_puterr.c \
				src/error.c \
				src/fridge.c \
				src/init_prog.c \
				src/my_put_nbr.c \
				src/my_str_to_wordtab.c \
				src/my_strncpy.c \
				src/my_getnbr.c \
				src/my_strcmp.c \
				src/make_meal.c \
				src/nb_compo.c \
				src/save_fridge.c \
				src/free.c \
				src/total_len.c \
				src/my_strcat.c \
				src/write_in_fd.c
 
OBJ		=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
				gcc -o 	$(NAME) $(OBJ)

clean:
				rm -f $(OBJ)

fclean:	clean
				rm -f $(NAME)

re:			fclean all

.PHONY:	all clean fclean re