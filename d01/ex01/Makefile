FILES	= ex01.cpp
SRCS	= $(addprefix ./, $(FILES))
OBJS	= $(SRCS:./%.cpp=.obj/%.o)
INC		= -I ./
FLAGS	= -Wall -Wextra -Werror
CC		= g++

all: $(OBJS)

.obj/%.o: ./%.cpp
	mkdir -p .obj
	$(CC) -c $< -o $@ $(FLAGS) $(INC)

clean:
	rm -rf .obj

fclean: clean

re: fclean all

.PHONY: all clean fclean re
