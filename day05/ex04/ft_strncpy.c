/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:17:02 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/15 22:21:52 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int end;

	end = n;
	while (n--)
	{
		if (*src == '\0')
		{
			*dest = '\0';
			dest++;
		}
		else
		{
			*dest = *src;
			dest++;
			src++;
		}
	}
	while (end--)
		dest--;
	return (dest);
}
