##
## Makefile for Makefile in /home/bettin_j//Documents/Malloc
## 
## Made by jordan bettin
## Login   <bettin_j@epitech.net>
## 
## Started on  Thu Jan 31 10:34:19 2013 jordan bettin
## Last update Fri Feb  8 16:48:30 2013 jordan bettin
##

NAME	=	libmy_malloc_$(HOSTTYPE).so

LIB_N	=	libmy_malloc.so

SRC_DIR	=	./src

SRCS	=	$(SRC_DIR)/init.c		\
		$(SRC_DIR)/malloc.c		\
		$(SRC_DIR)/realloc.c		\
		$(SRC_DIR)/free.c		\
		$(SRC_DIR)/add_block.c		\
		$(SRC_DIR)/find_next_element.c	\
		$(SRC_DIR)/show_alloc_mem.c	\
		$(SRC_DIR)/copy_block.c		\
		$(SRC_DIR)/get_block.c		\
		$(SRC_DIR)/xsysconf.c		\
		$(SRC_DIR)/xsbrk.c		\
		$(SRC_DIR)/xbrk.c

OBJS	=	$(SRCS:.c=.o)

DUST	=	*~ \#*\#

DUSTI	=	./include/*~ ./include/\#*\#

DUSTS	=	./src/*~ ./src/\#*\#

RM	=	rm -f

FLAGS	=	-W -Wall -Werror

LIBFL	=	-shared -fPIC

CC	=	gcc

LN	=	ln -s

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(SRCS) $(FLAGS) $(LIBFL) -o $(NAME)
		$(LN) $(NAME) $(LIB_N)

dust	:
		$(RM) $(DUST)
		$(RM) $(DUSTI)
		$(RM) $(DUSTS)

clean	:	dust
		$(RM) $(OBJS)

fclean	:	clean
		$(RM) $(NAME)
		$(RM) $(LIB_N)

re	:	fclean all
