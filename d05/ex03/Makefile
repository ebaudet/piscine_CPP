NAME	= intern
FILES	= main.cpp Bureaucrat.cpp Form.cpp Intern.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp
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
