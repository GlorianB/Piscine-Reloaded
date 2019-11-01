# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbikoumo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/03 05:32:48 by gbikoumo          #+#    #+#              #
#    Updated: 2019/04/03 05:44:32 by gbikoumo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc 

RM = rm -f
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_display_file.c
OBJS = ft_display_file.o

all :
	@make $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS) :
	$(CC) $(CFLAGS) -c $(SRCS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
