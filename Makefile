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
#----------------------Name program---------------------------------------------
NAME	= push_swap
#----------------------Source program-------------------------------------------
MAKE_FLAGS = --no-print-directory
SRCS	= main.c  checkin.c push.c reverse_rotate.c \
			rotate.c swap.c functions_stacks.c utils.c #push_swap.c

OBJS	= ${SRCS:.c=.o} 

DEPS = $(SRCS:.c=.d)

LIB = libft_ok/

CC	= gcc

RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror -MMD

all: 
	 @$(MAKE) ${MAKE_FLAGS} -C $(LIB)
	@$(MAKE) ${MAKE_FLAGS} ${NAME}
	

${NAME}:   ${OBJS} ${LIB}libft.a
	
	${CC} -o ${NAME} ${OBJS} -L ${LIB} -lft

%.o:%.c
	${CC} ${CFLAGS} -I ${LIB} -c $< -o $@
clean:
	${RM} ${OBJS} ${DEPS}
	@$(MAKE) ${MAKE_FLAGS} clean -C $(LIB)

fclean: clean
	${RM} ${NAME} 
	@$(MAKE) ${MAKE_FLAGS} fclean -C $(LIB)

re: fclean all
-include $(DEPS)
.PHONY: all clean fclean re 