/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 16:40:00 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/22 15:26:09 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include.h"
#include "ft_opp.h"

char	*op_check(char *op, char **av)
{
	if (ft_strcmp('+', av[2]) != 0 || ft_strcmp('-', av[2]) != 0 ||
			ft_strcmp('*', av[2]) != 0 || ft_strcmp('%', av[2]) != 0 || ft_strcmp('/', av[2]) != 0)
		return (0);
	else
		return (op);
}

int		stop_check(int nb, char *op)
{
	if (nb == 0 && op[0] == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	else if (nb == 0 && op[0] == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int 	nb1;
	int 	nb2;
	char 	*op;
	int 	res;
	int		i;

	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	op = argv[2];
	op = op_check(op, argv[2]);
	if (!(stop_check(nb2, op)))
		return (0);	
	if (argc == 4)
	{
		i = 0;
		while (i < 6)
		{
			if (ft_strcmp(op, g_opptab[i].op) == 0)
				res = g_opptab[i].p(nb1, nb2);
			i++;
		}
	}
	if (ft_strcmp(op, "") != 0)
		ft_putnbr(res);
	return (0);
}
