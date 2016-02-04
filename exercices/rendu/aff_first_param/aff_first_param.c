/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 19:08:48 by exam              #+#    #+#             */
/*   Updated: 2015/10/23 19:25:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int size;
	char *str;

	size = 0;
	str = argv[1];
	if (argc <=	1)
		write(1, "\n", 1);
	else
	{
		while (str[size] != '\0')
			size++;
		write(1, str, size);
		write(1, "\n", 1);
	}
	return (0);
}
