 **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rababaci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 19:25:28 by rababaci          #+#    #+#              #
#    Updated: 2019/01/27 15:17:19 by rababaci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.c ft_putchar.c ft_putnbr.c ft_atoi.c do_op.c 

FLAGS = -Wall -Wextra -Werror

NAME = do-op

CC = gcc

all: $(NAME)

$(NAME):
		@$(CC) $(FLAGS) $(SRCS) -o $(NAME)	

clean:
		@rm -f $(NAME)

re: clean all
