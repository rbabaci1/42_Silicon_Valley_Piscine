/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 22:04:20 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/23 22:34:28 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (begin_list == NULL)
		return (NULL);
	while (nbr > 0 && begin_list->next != NULL)
	{
		begin_list = begin_list->next;
		nbr--;
	}
	if (nbr != 0)
		return (NULL);
	return (begin_list);
}
