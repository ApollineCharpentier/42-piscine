/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 18:15:38 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/16 19:22:24 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int n;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	n = max - min;
	if (!(*range = malloc((n + 1) * (sizeof(int)))))
		return (0);
	i = 0;
	while (i < n)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
