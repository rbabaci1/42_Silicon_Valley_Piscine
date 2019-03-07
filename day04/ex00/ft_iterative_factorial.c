/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 11:43:17 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/12 16:47:37 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int count;

    fact = 1;
	count = 1;
	if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	while (nb >= count)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}
