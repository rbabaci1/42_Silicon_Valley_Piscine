/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:19:31 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/23 21:53:39 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*temp;
	t_list	*begin_list;
	int		i;

	begin_list = NULL;
	i = 0;
	while (i < ac)
	{
		temp = ft_create_elem(av[i]);
		temp->next = begin_list;
		begin_list = temp;
		i++;
	}
	return (begin_list);
}
