/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 21:33:21 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/15 22:30:32 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	char	*ptr;

	i = 0;
	while (dest[i] != '\0')
		i++;
	ptr = dest + i;
	while (*src != '\0' && nb--)
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}
