/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 22:28:35 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/11 23:43:09 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int start;
	int end;
	char c;

	end = 0;
	while (str[end] != '\n')
	{
		end++;
	}
	start = -1;
	while (++start < --end)
	{
		c = str[end];
		str[end] = str[start];
		str[start] = c;
	}
	return (str);
}
