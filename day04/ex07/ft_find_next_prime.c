/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 23:18:22 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/12 23:42:55 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;
	int j;
	int flag;

	flag = 0;
	j = 2;
	i = nb + 1;
	while (i <= 100)
	{
		while (j < i)
		{
			if (i % j == 0)
			{
				flag = 1;
				break;
			}
			i++;
			j++;
		}
		if (flag == 0)
				return i;
	}
}	
