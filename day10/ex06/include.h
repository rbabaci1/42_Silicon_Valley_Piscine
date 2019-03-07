/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   include.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 15:23:39 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/22 14:54:09 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDE_H
# define INCLUDE_H

# include <unistd.h>

void	ft_putnbr(int nb);
int		ft_putchar(char c);
int		ft_atoi(char *str);
void	do_op(char *nb1, char *op, char *nb2);

#endif
