/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/07 13:17:39 by exam              #+#    #+#             */
/*   Updated: 2015/11/07 13:34:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_separator(char c)
{
	if (c == ' ' || c == '\n' || c == '\0')
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
					argv[i][j] = argv[i][j] + 32;
				if (is_separator(argv[i][j + 1]) && (!(is_separator(argv[i][j]))) 
					&& argv[i][j] >= 'a' && argv[i][j] <= 'z')
					argv[i][j] = argv[i][j] - 32;
				j++;
			}
			ft_putstr(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
