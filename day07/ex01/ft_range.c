/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:19:29 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/17 16:20:08 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int diff;
	int *ptr;

	i = 0;
	if (min >= max)
		return ((void*)0);
	diff = max - min;
	ptr = (int*)malloc(sizeof(int) * diff + 1);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
