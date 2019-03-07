/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 16:26:17 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/12 17:24:23 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0 || power > 30)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
}
