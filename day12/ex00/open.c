/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 11:59:59 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/24 19:49:31 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#define BUF_SIZE 4096

int		arg_check(char argc)
{
	int flag;

	flag = 1;
	if (argc < 2)
	{
		write(2, "File name missing.", 18);
		ft_putchar('\n');
		flag = 0;
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.", 19);
		ft_putchar('\n');
		flag = 0;
	}
	return (flag);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buffer[BUF_SIZE + 1];

	if (!(arg_check(argc)))
		return (0);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		while ((ret = read(fd, buffer, BUF_SIZE)))
		{
			buffer[ret] = '\0';
			ft_putstr(buffer);
		}
		if (close(fd) == -1)
			return (1);
	}
	return (0);
}
