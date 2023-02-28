NAME = weapon
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

OBJS = $(SRCS:.cpp=.o)

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror  -std=c++98

all%:		$(SRCS) $(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:		
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME)
re:			fclean $(NAME)
.PHONY:			all clean fclean re