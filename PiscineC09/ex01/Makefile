# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bedoueni <bedoueni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 11:00:28 by bedoueni          #+#    #+#              #
#    Updated: 2019/07/23 16:40:53 by bedoueni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = $(addprefix ./srcs/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
NAME = libft.a
OBJS = $(SRCS:.c=.o)
HEADER = ./includes/
CFLAGS = -Wall -Wextra -Werror -I $(HEADER)
CC = gcc
all : $(NAME)


$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
clean:
	rm -rf $(OBJS)
fclean:
	make clean
	rm -f $(NAME)
re: fclean all
