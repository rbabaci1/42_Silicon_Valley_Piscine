/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:59:59 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/24 23:32:27 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 30

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	int		i;
	char	buffer[BUF_SIZE + 1];

	if (argc == 1)
	{
		while (read(1, buffer, BUF_SIZE))
			write(1, buffer, BUF_SIZE);
	}
	i = 1;
	while (i < argc)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			return (1);
		while ((ret = read(fd, buffer, BUF_SIZE)))
		{
			buffer[ret] = '\0';
			ft_putstr(buffer);
		}
		if (close(fd) == -1)
			return (1);
		i++;
	}
	return (0);
}
