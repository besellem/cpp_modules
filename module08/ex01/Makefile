# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besellem <besellem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 13:46:17 by besellem          #+#    #+#              #
#    Updated: 2021/08/31 18:46:24 by besellem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	span

SRCS		:=	main.cpp \
				Span.cpp

OBJS		=	$(SRCS:.cpp=.o)

INCS		:=	Span.hpp

CC			:=	clang++
CPPFLAGS	:=	-Wall -Wextra -Werror

.c.o:
			@echo "Compiling ..."
			@$(CC) $(CPPFLAGS) -c $< -o $(<:.c=.o) -I $(INCS)

$(NAME):	$(OBJS)
			@$(CC) $(CPPFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			@echo "Deleting objects ..."
			@rm -f $(OBJS)

fclean:		clean
			@echo "Deleting binary ..."
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
