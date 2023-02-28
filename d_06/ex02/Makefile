NAME = main
SRCS =  main.cpp Base.cpp A.cpp B.cpp C.cpp
HDRS = Base.hpp A.hpp B.hpp C.hpp

OBJS = $(SRCS:.cpp=.o)

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all%:		$(SRCS) $(NAME)

$(NAME):	$(OBJS) $(HDRS)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)
fclean:		clean
			rm -f $(NAME)
re:			fclean $(NAME)
.PHONY:		all clean fclean re