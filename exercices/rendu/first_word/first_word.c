/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/07 18:19:45 by smrabet           #+#    #+#             */
/*   Updated: 2016/01/07 18:27:49 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;
	int		d;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && (argv[1][i] == ' '
			|| argv[1][i] == '\t' || argv[1][i] == '\n'))
			i++;
		d = i;
		while (argv[1][i] && argv[1][i] != ' '
			&& argv[1][i] != '\t' && argv[1][i] != '\n')
			i++;
		while (d < i)
		{
			write(1, &argv[1][d], 1);
			d++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
