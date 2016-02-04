/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 20:45:57 by exam              #+#    #+#             */
/*   Updated: 2015/10/23 21:06:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char ** argv)
{
	char *str;
	int i;
	int x;

	x = 0;
	i = 0;
	str = argv[1];
	if (argc == 2)
	{
		if (str == '\0')
			write(1, "\n", 1);
		else
		{
			while (str[i])
			{
				if (str[i] >= 97 && str[i] <= 122)
				{
					x = str[i] - 97;
					while (x>= 0)
					{
						write(1, &str[i], 1);
						x--;
					}
				}
				else if (str[i] >= 65 && str[i] <= 90)
				{
					x = str[i] - 65;
					while (x >= 0)
					{
						write(1, &str[i], 1);
						x--;
					}
				}
				else
					write(1, &str[i], 1);
				i++;
			}
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
