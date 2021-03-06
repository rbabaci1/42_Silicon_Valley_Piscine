/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 17:21:08 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/15 17:32:21 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_number(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= ' ' && str[i] <= '/') ||
				(str[i] >= ':' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
