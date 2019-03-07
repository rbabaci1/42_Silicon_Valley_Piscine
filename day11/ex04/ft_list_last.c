/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 14:46:33 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/23 21:13:45 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	if (begin_list != NULL)
	{
		while (begin_list->next != NULL)
			begin_list = begin_list->next;
	}
	return (begin_list);
}
