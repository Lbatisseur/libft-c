# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbelouar42 <nbelouar42@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 15:27:32 by nassimbelou       #+#    #+#              #
#    Updated: 2023/11/03 17:01:17 by nbelouar42       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	$(wildcard *.c)

OBJS =	${SRCS:.c=.o}

HEAD =	libft.h

NAME =	libft.a

CFLAGS =	-Wall -Werror -Wextra

all:		${NAME}

.c.o:
	gcc ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar -rcs	${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean:		clean
	rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re