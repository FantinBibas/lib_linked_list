##
## Makefile for Lib_lkl in /home/neodar/Epitech/libs/lib_linked_list
## 
## Made by Fantin Bibas
## Login   <fantin.bibas@epitech.eu@epitech.net>
## 
## Started on  Mon Apr  3 14:21:15 2017 Fantin Bibas
## Last update Tue Apr  4 16:00:19 2017 Fantin Bibas
##

CC	=	gcc

AR	=	ar

RM	=	rm -f

NAME	=	liblkl.a

FLAGS	=	rc

CPPFLAGS =	 -c -I./include/

SRCS	=	src/lklAppend.c		\
		src/lklCreate.c		\
		src/lklDelete.c		\
		src/lklDestroy.c	\
		src/lklElem.c		\
		src/lklElemPtr.c	\
		src/lklExtend.c		\
		src/lklLast.c		\
		src/lklLen.c		\
		src/lklReverse.c	\
		src/lklSort.c		\
		src/lklSortFuncs.c

OBJDIR	=	objs

OBJS	=	$(SRCS:%.c=$(OBJDIR)/%.o)

$(OBJDIR)/%.o:	%.c
	mkdir -p $(@D)
	$(CC) $< -o $@ $(CPPFLAGS)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(FLAGS) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
