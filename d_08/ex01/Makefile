NAME = main
SRCS =  main.cpp Span.cpp
HDRS = Span.hpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all%:		$(SRCS) $(NAME)

$(NAME):	$(OBJS) $(HEADERS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME)
re:			fclean $(NAME)
.PHONY:		all clean fclean re