/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 09:37:32 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/17 18:20:29 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*temp;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == '\0')
		return (0);
	temp = str;
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (str);
}
