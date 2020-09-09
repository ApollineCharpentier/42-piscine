/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:03:42 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/22 18:40:06 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **s1, char **s2)
{
	char *str;

	str = *s1;
	*s1 = *s2;
	*s2 = str;
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i])
	{
		if (i == ft_strlen(s1) && i == ft_strlen(s2))
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
