/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/30 18:42:00 by exam              #+#    #+#             */
/*   Updated: 2015/10/30 19:23:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	char n;
	int size;
	int f;
	int d;

	n = '\n';
	if (argc == 2)
	{
		d = 0;
		size = 0;
		while (argv [1][size])
			size++;
		size--;
		f = size;
		while (argv[1][size] && (argv[1][size] == ' ' || argv[1][size] == '\t'))
			size--;
		f = size;
		while (argv[1][size] && argv[1][size] != ' ' && argv[1][size] != '\t')
			size--;
		d = size + 1;
		if (f != d)
		{
			while (d <= f)
			{
				write(1, &argv[1][d], 1);
				d++;
			}
		}
		write(1, &n, 1);
	}
	else
		return (write(1, &n, 1));
	return (0);
}
