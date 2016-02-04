/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 10:48:15 by smrabet           #+#    #+#             */
/*   Updated: 2016/02/02 11:33:54 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	cmp(char *str, char c, int index)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			break;
		i++;
	}
	if (i == index)
		ft_putchar(c);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		cmp(s1, s1[i], i);
		i++;
	}
	i = 0;
	while (s2[i])
	{
		j = 0;
		while (s1[j])
		{
			if (s1[j] == s2[i])
				break;
			j++;
		}
		if (!s1[j])
			cmp(s2, s2[i], i);

		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
