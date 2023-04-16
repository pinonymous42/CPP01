NAME        :=  Unnecessary_violence
CC			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98
SRCS		:=	main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS		:=	$(SRCS:.cpp=.o)
RM			:=	rm -rf

all: $(NAME)

%.o: %.cpp
	$(CC) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re