SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HEADERS = Zombie.hpp
OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror  -std=c++98

NAME = zombie

all%:		$(SRCS) $(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:		
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME)
re:			fclean $(NAME)
.PHONY:			all clean fclean re