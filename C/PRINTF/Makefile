# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbiescas <nbiescas@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/06 09:43:35 by nbiescas          #+#    #+#              #
#    Updated: 2023/03/08 10:14:58 by nbiescas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c format.c ft_putstr.c hexadecimal_conversion.c \
ft_toupper.c ft_itoa.c

OBJS = $(SRCS:.c=.o)

INCLUDE = -I ./

RM = rm -f

DEPS = $(SRCS:.c=.d)

%.o: %.c

	${CC} ${CFLAGS} -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

-include $(DEPS)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all bonus clean fclean re