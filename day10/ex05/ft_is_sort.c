/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 16:30:11 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/22 20:16:37 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int j;

	if (length == 0)
		return (1);
	i = 0;
	j = 0;
	while (i + 1 < length && f(tab[i], tab[i + 1]) <= 0)
		i++;
	while (j + 1 < length && f(tab[j], tab[j + 1]) >= 0)
		j++;
	if (j + 1 == length || i + 1 == length)
		return (1);
	return (0);
}
