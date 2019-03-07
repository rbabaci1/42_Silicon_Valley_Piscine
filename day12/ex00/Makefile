# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rababaci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/24 12:47:49 by rababaci          #+#    #+#              #
#    Updated: 2019/01/24 20:15:42 by rababaci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_putchar.c ft_putstr.c open.c

FLAGS = -Wall -Wextra -Werror

CC = gcc

NAME = ft_display_file

all: $(NAME)

$(NAME):
		@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
		@rm -f *.o

fclean: clean
		@rm -f $(NAME)

re: fclean all
