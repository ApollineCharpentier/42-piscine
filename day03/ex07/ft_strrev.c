/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 11:58:31 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/06 16:13:39 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	swap;
	char	*chaine;

	j = ft_strlen(str);
	i = 0;
	chaine = str;
	while (i < j)
	{
		j--;
		swap = chaine[i];
		chaine[i] = str[j];
		str[j] = swap;
		i++;
	}
	str = chaine;
	return (str);
}
