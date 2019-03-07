/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 16:40:00 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/22 21:07:50 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"

int		main(int argc, char **argv)
{
	if (argv[2][0] == '/' && argv[3][0] == '0')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (argv[2][0] == '%' && argv[3][0] == '0')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	if (argc == 4)
	{
		do_op(argv[1], argv[2], argv[3]);
		ft_putchar('\n');
	}
	return (0);
}
