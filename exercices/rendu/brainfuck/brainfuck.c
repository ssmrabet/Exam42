/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 12:24:29 by smrabet           #+#    #+#             */
/*   Updated: 2016/01/26 13:25:34 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define MEM_SIZE 2048

char mem[MEM_SIZE] = {0};
char *memp = mem;

void bf_eval(char *code, int len)
{
	int ip;
	int depth;
	int x;

	ip = 0;
	while (ip < len)
	{
		switch (code[ip])
		{
			case '+':
				++*memp;
				break;
			case '-':
				--*memp;
				break;
			case '>':
				memp++;
				break;
			case '<':
				memp--;
				break;
			case '.':
				x = *(int*)memp;
				write(1, &x, 1);
				break;
			case '[':
				if (*memp == 0)
				{
					depth = 1;
					while (depth != 0)
					{
						ip++;
						if (code[ip] == '[')
							depth++;
						else if (code[ip] == ']')
							depth--;
					}
				}
				break;
			case ']':
				if (*memp != 0)
				{
					depth = 1;
					while (depth != 0)
					{
						ip--;
						if (code[ip] == ']')
							depth++;
						else if (code[ip] == '[')
							depth--;
					}
				}
				break;
		}
		ip++;
	}
}

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str = str + 1;
	}
	return (size);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		bf_eval(argv[1], ft_strlen(argv[1]));
	else
		write(1, "\n", 1);
	return 0;
}
