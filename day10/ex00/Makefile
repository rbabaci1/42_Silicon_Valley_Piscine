# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rababaci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 09:17:59 by rababaci          #+#    #+#              #
#    Updated: 2019/01/28 13:13:16 by rababaci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strcmp.c srcs/ft_strlen.c

HEADERS = includes

FLAGS = -c -Wall -Wextra -Werror -I$(HEADERS)

NAME = libft.a

CC = gcc

all: $(NAME)

$(NAME):
		@$(CC) $(FLAGS) $(SRCS)
		@ar rc $(NAME) ft_putchar.o ft_swap.o ft_strlen.o ft_strcmp.o ft_putstr.o

clean:
		@rm -f ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o

fclean: clean
		@rm -f $(NAME)

re: fclean all
