# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 01:11:33 by gbikoumo          #+#    #+#              #
#    Updated: 2019/04/03 01:38:50 by gbikoumo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror -Iincludes
LIB = ar rc
RM = rm -f

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strlen.c \
	   srcs/ft_swap.c

OBJS = ft_putchar.o \
	   ft_putstr.o \
	   ft_strcmp.o \
	   ft_strlen.o \
	   ft_swap.o

all :
	@make $(NAME)

$(NAME) : $(OBJS)
	$(LIB) $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

