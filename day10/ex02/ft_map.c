/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 14:21:36 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/22 15:54:24 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *tab2;
	int i;

	i = 0;
	if (!(tab2 = (int*)malloc(sizeof(int) * length)))
		return (0);
	while (i < length)
	{
		tab2[i] = f(tab[i]);
		i++;
	}
	return (tab2);
}
