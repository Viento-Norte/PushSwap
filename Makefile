# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: legarcia <legarcia@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/22 20:21:02 by legarcia          #+#    #+#              #
#    Updated: 2023/03/26 00:06:46 by legarcia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
MAKE = $(MAKE) --no-print-directory
#----------------------Name program---------------------------------------------
NAME	= push_swap
#----------------------Source program-------------------------------------------

SRCS	= main.c push_swap.c checkin.c utils.c 

OBJS	= ${SRCS:.c=.o} 

DEPS = $(SRCS:.c=.d)

LIB = libft_ok/

CC	= gcc



RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror -MMD

all: 
	MAKE -C $(LIB)
	MAKE ${NAME}
	

${NAME}:   ${OBJS} ${LIB}libft.a
	
	${CC} -o ${NAME} ${OBJS} -L ${LIB} -lft

%.o:%.c
	${CC} ${CFLAGS} -I ${LIB} -c $< -o $@
clean:
	${RM} ${OBJS} ${DEPS}
	MAKE clean -C $(LIB)

fclean: clean
	${RM} ${NAME} 
	MAKE fclean -C $(LIB)

re: fclean all
-include $(DEPS)
.PHONY: all clean fclean re 