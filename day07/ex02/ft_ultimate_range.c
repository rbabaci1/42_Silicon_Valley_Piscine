/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 14:21:04 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/17 18:12:10 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int diff;
	int *ptr;

	if (min >= max)
	{
		*range = ((void*)0);
		return (0);
	}
	diff = max - min;
	ptr = (int*)malloc(sizeof(int) * diff);
	if (ptr == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	*range = ptr;
	return (i);
}
