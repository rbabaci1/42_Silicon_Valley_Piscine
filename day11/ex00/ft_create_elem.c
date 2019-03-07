/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 09:25:12 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/23 11:32:48 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *temp;

	temp = malloc(sizeof(t_list));
	if (temp == NULL)
		return (0);
	temp->data = data;
	temp->next = NULL;
	return (temp);
}
