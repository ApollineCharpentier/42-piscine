/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:01:18 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/07 19:57:02 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	if (nb <= 0 || nb > 2147395600)
		return (0);
	i = 1;
	while (i * i < nb)
		i++;
	if (i * i > nb)
		return (0);
	else
		return (i);
}