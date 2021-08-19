# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besellem <besellem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 13:46:17 by besellem          #+#    #+#              #
#    Updated: 2021/08/19 13:02:15 by besellem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	intern

SRCS		:=	main.cpp \
				Bureaucrat.cpp \
				Form.cpp \
				PresidentialPardonForm.cpp \
				RobotomyRequestForm.cpp \
				ShrubberyCreationForm.cpp \
				Intern.cpp

OBJS		=	$(SRCS:.cpp=.o)

INCS		:=	Bureaucrat.hpp \
				Form.hpp \
				PresidentialPardonForm.hpp \
				RobotomyRequestForm.hpp \
				ShrubberyCreationForm.hpp \
				Intern.hpp

CC			:=	clang++
CPPFLAGS	:=	-Wall -Wextra -Werror -std=c++98 -g3

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
