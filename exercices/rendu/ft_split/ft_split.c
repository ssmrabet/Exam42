/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smrabet <smrabet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 11:16:34 by smrabet           #+#    #+#             */
/*   Updated: 2016/01/26 11:46:44 by smrabet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
		return (1);
	return(0);
}

int		count_words(char *str)
{
	int		words;
	int		i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (is_separator(str[i + 1]) == 1 &&
				is_separator(str[i]) == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *word, char *str)
{
	int		i;

	i = 0;
	while (is_separator(str[i]) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
}

void	write_tab(char **tab, char *str)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i])
	{
		if (is_separator(str[i]) == 0)
		{
			j = 0;
			while (is_separator(str[i + j]) == 0)
				j++;
			tab[word] = (char*)malloc(sizeof(char) * (j + 1));
			write_word((tab[word]), (str + i));
			i += j;
			word++;
		}
		else
			i++;
	}
	tab[word] = NULL;
}

char	**ft_split(char *str)
{
	char	**tab;
	int		count;

	count = count_words(str);
	tab = (char**)malloc(sizeof(char*) * (count + 1));
	write_tab(tab, str);
	return (tab);
}
