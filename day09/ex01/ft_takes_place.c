/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 09:40:11 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/18 13:01:43 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int hours;

	hours = hour;
	if (hours > 12)
		hours = hour % 12;
	if (hour == 0)
		hours = 12;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hours, (hours + 1) % 12);
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 24)
		printf("12.00 A.M. AND 01.00 A.M.\n");
	else
		printf("%d.00 P.M. AND %d.00 P.M.\n", hours, (hours + 1) % 12);
}
