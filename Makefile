# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbouqssi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 23:11:03 by hbouqssi          #+#    #+#              #
#    Updated: 2021/12/12 00:20:26 by hbouqssi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INC = ft_printf.h

SRC = 	ft_hexa_lower.c\
		ft_hexa_upper.c\
		ft_put_unsigned.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putstr.c\
		ft_put_pointer.c\
		ft_after_percentage.c\
		ft_printf.c
CFLAGS = -Wall -Werror -Wextra

OBJ = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	gcc -c $(CFLAGS) $(SRC) -I $(INC)
	ar -rc $(NAME) $(OBJ)

clean: 
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: re
	@rm -f a.out
	@gcc main.c -I . -L . -lftprintf
	@clear
	@./a.out | cat -e