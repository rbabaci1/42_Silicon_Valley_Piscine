/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 19:50:02 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/23 20:33:04 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	if (*begin_list != NULL)
	{
		temp = ft_create_elem(data);
		temp->next = *begin_list;
		*begin_list = temp;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}
