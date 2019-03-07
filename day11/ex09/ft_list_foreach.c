/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 23:08:11 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/23 23:45:17 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *ptr;

	ptr = begin_list;
	while (ptr != NULL)
	{
		(*f)(ptr->data);
		ptr = (*f)(ptr->next);
	}
}
