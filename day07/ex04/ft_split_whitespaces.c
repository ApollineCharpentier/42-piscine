/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 13:26:59 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/16 19:45:48 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		word_test(char b, char a)
{
	if (b >= 33 && b <= 126 && (a == ' ' || a == '\t' || a == '\n'))
		return (1);
	else
		return (0);
}

int		words_count(char *str)
{
	int i;
	int n;

	i = 1;
	if (str[0] == ' ' || str[0] == '\t' || str[0] == '\n' || str[0] == '\0')
		n = 0;
	else
		n = 1;
	while (str[i] != '\0')
	{
		n = n + word_test(str[i], str[i - 1]);
		i++;
	}
	return (n);
}

int		word_len(int i, char *str)
{
	int j;
	int n;
	int k;

	if (str[0] == ' ' || str[0] == '\t' || str[0] == '\n')
		n = 0;
	else
		n = 1;
	j = 1;
	while (n < i)
	{
		n = n + word_test(str[j], str[j - 1]);
		j++;
	}
	k = 1;
	while (str[j] != ' ' && str[j] != '\t' && str[j] != '\n' && str[j] != '\0')
	{
		k++;
		j++;
	}
	return (k);
}

int		word_start(int i, char *str)
{
	int j;
	int n;

	if (str[0] == ' ' || str[0] == '\t' || str[0] == '\n')
		n = 0;
	else
		n = 1;
	j = 1;
	while (n < i)
	{
		n = n + word_test(str[j], str[j - 1]);
		j++;
	}
	return (j);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		n;

	n = words_count(str);
	if (!(tab = malloc(sizeof(char*) * (n + 1))))
		return (0);
	i = 0;
	while (i < n)
	{
		tab[i] = malloc(sizeof(char) * (word_len(i + 1, str)));
		j = 0;
		while (j < word_len(i + 1, str))
		{
			tab[i][j] = str[word_start(i + 1, str) + j - 1];
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
