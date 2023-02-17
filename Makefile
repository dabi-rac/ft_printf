# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabi-rac <dabi-rac@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/16 15:55:13 by dabi-rac          #+#    #+#              #
#    Updated: 2023/02/16 15:55:15 by dabi-rac         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RCS			=	ft_hexlower.c ft_hexupper.c ft_pointer.c ft_printf.c \
					ft_putchar.c ft_putnbr.c ft_putnbr_u.c ft_putstr.c \

OBJS			= $(SRCS:.c=.o)


CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) 

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re bonus