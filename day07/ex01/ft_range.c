/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 17:29:46 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/16 19:20:56 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;
	int		n;

	if (min >= max || min < -2147483648 || max > 2147483647)
		return (0);
	else
	{
		n = max - min;
		if (!(tab = (int*)malloc((n + 1) * (sizeof(int)))))
			return (0);
		i = 0;
		while (i < n)
		{
			tab[i] = min + i;
			i++;
		}
		tab[i] = '\0';
	}
	return (tab);
}
