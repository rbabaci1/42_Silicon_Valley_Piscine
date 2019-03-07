/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 13:01:13 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/12 16:22:15 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	result = 1;
	while (power)
	{
		result *= nb;
		--power;
	}
	return (result);
}
