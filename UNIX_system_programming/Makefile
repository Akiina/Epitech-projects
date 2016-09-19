/*
** Makefile for Epitech-projects in /home/rishy/Epitech-projects
**
** Made by Rishy
** Login   <rishy@epitech.net>
**
** Started on  Mon Sep 19 14:08:16 2016 Rishy
** Last update Mon Sep 19 14:08:33 2016 Rishy
*/

NAME1	= server/server

NAME2	= client/client

SRCS1	= server/server.c \
	  server/multi_client.c \
	  my/my_tools.c \
	  my/my.c

SRCS2	= client/client.c \
	  my/my_getnbr.c \
	  my/my.c

OBJS1	= $(SRCS1:.c=.o)

OBJS2	= $(SRCS2:.c=.o)

RM	= rm -f

all:		$(NAME1) $(NAME2)

$(NAME1):	$(OBJS1)
		cc -o $(NAME1) $(OBJS1)

$(NAME2):	$(OBJS2)
		cc -o $(NAME2) $(OBJS2)
clean:
		$(RM) $(OBJS1)
		$(RM) $(OBJS2)

fclean:		clean
		$(RM) $(NAME1)
		$(RM) $(NAME2)

re:		fclean all

.PHONY:		all clean fclean re
