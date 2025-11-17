# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmesini- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/17 15:38:48 by vmesini-          #+#    #+#              #
#    Updated: 2025/11/17 15:38:49 by vmesini-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

SRCS = ft_disp_char.c\
		ft_disp_int.c\
		ft_disp_pointer.c\
		ft_disp_string.c\
		ft_disp_unsigned.c\
		ft_disp_x.c\
		ft_disp_X.c\
		ft_printf.c\
		ft_putchar.c\
		ft_putnbr.c\
		ft_putstr.c

OBJ = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra -Iincludes

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re