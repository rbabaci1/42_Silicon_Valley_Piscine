.
./* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 21:51:59 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/17 22:36:54 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);

int		ft_strlen(int argc, char **argv)
{
	int i;
	int j;
	int bytes;

	i = 1;
	bytes = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			bytes++;
			j++;
		}
		i++;
	}
	return (bytes);
}

char	*ft_concat_params(int argc, char **argv)
{
	int			i;
	int			j;
	int			k;
	char		*str;

	i = 1;
	k = 0;
	str = (char*)malloc(sizeof(char) * ft_strlen(argc, argv));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			str[k++] = argv[i][j++];
		if (i + 1 < argc)
			str[k++] = '\n';
		else
			str[k++] = '\0';
		i++;
	}
	return (str);
}
