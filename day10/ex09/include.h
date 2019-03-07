/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 10:51:42 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/22 15:21:24 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

#include <unistd.h>

int		ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	do_op(char *nb1, char *op, char *nb2);

int		ft_sub(int nb1, int nb2);
int		ft_add(int nb1, int nb2);
int		ft_mul(int nb1, int nb2);
int		ft_div(int nb1, int nb2);
int		ft_mod(int nb1, int nb2);
int		ft_usage(int nb1, int nb2);
int		ft_strcmp(char *s1, char *s2);

typedef struct	s_opp
{
	char *op;
	int (*p)(int, int);	
}				t_opp;
#endif
