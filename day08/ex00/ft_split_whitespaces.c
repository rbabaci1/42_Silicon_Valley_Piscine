/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rababaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:31:39 by rababaci          #+#    #+#             */
/*   Updated: 2019/01/18 13:11:56 by rababaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_word_count(char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '\n' || str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i] != '\n' && str[i] != ' ' && str[i] != '\t')
			word++;
		while (str[i] != '\n' && str[i] != ' ' && str[i] != '\t' &&
				str[i] != '\0')
			i++;
	}
	return (word);
}
