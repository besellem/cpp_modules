# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besellem <besellem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 13:46:17 by besellem          #+#    #+#              #
#    Updated: 2021/07/21 17:46:22 by besellem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	phonebook

SRCS		:=	PhoneBook.cpp \
				main.cpp

OBJS		=	$(SRCS:.cpp=.o)

INCS		:=	PhoneBook.hpp

CC			:=	clang++
CPPFLAGS	:=	-Wall -Wextra -Werror -std=c++98

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
