# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebaudet <ebaudet@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/15 01:50:21 by ebaudet           #+#    #+#              #
#    Updated: 2015/01/15 01:55:56 by ebaudet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= iter
FILES	= iter.cpp
SRCS	= $(addprefix ./, $(FILES))
OBJS	= $(SRCS:./%.cpp=.obj/%.o)
INC		= -I ./
FLAGS	= -Wall -Wextra -Werror
CC		= g++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME) $(INC)

.obj/%.o: ./%.cpp
	mkdir -p .obj
	$(CC) -c $< -o $@ $(FLAGS) $(INC)

clean:
	rm -rf .obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
