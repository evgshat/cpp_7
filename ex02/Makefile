NAME	=	_ex02
CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
SRCS	=	main.cpp
OBJS	=	${SRCS:.cpp=.o}
RM		=	rm -rf
HEADERS	=	Array.hpp

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} $^ -o $@

%.o: %.cpp Makefile ${HEADERS}
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all
