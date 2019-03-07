/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 08:49:07 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/10 12:55:03 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0';
	y = '1';
	z = '2';
	while (x <= '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				if (x < y && y < z)
				{
					print(x, y, z);
				}
				z++;
			}
			z = '0';
			y++;
		}
		y = '0';
		x++;
	}
}
