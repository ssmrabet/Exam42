/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 20:16:57 by exam              #+#    #+#             */
/*   Updated: 2015/10/30 20:33:29 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char	n;
	char	ret;
	int		j;
	int		k;

	j = 0;
	k = 0;
	n = '\n';
	if (argc == 3)
	{
		while (argv[2][j] != '\0' &&  argv[1][k] != '\0')
		{
			if (argv[1][k] == argv[2][j])
				k++;
			j++;
		}
		if (argv[1][k] == '\0')
		{
			ret = '1';
			write(1, &ret, 1);
		}
		else
		{
			ret = '0';
			write(1, &ret, 1);
		}
		write(1, &n, 1);
	}
	else
		write (1, &n, 1);
	return (0);
}
