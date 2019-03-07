/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:09:10 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/21 11:26:06 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *ptr;
	int i;

	ptr = (int*)malloc(sizeof(int) * length);
	if (ptr == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		ptr[i] = f(tab[i]);
		i++;
	}
	return (ptr);
}
