NAME    =		intern
SRCS    =       Bureaucrat.cpp Form.cpp main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
OBJS    =       $(SRCS:.cpp=.o)
DEPS    =       $(SRCS:.cpp=.d)
CC              =       clang++ -std=c++98 -Wall -Werror -Wextra -MMD
RM              =       rm -f

all:                    $(NAME)

$(NAME):                $(OBJS)
						@$(CC) $(OBJS) -o $(NAME)
-include $(DEPS)
%.o : %.cpp
						$(CC) -o $@ -c $<
clean:
						$(RM) $(OBJS) $(DEPS)

fclean:                 clean
						$(RM) $(NAME)

re:                             fclean all

.PHONY:                 all clean fclean re
