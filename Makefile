# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 20:21:02 by legarcia          #+#    #+#              #
#    Updated: 2023/03/17 18:23:47 by legarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#----------------------Name program---------------------------------------------
NAME	= push_swap
#----------------------Source program-------------------------------------------

SRCS	= push_swap.c checkin.c

OBJS	= ${SRCS:.c=.o}

LIB = libft_ok/

CC	= @gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

HEADERS = $(LIB)libft.h push_swap.h
${NAME}:    ${OBJS} ${HEADERS}
	$(MAKE) -C ${LIB}
	${CC} -o ${NAME} ${OBJS} ${LIB}libft.a

all: ${NAME}

libft:	
		$(MAKE) -C $(LIB)

clean:
	${RM} ${OBJS}
	$(MAKE) clean -C $(LIB)

fclean: clean
	${RM} ${NAME} 
	$(MAKE) fclean -C $(LIB)

re: fclean all

.PHONY: all clean fclean re
