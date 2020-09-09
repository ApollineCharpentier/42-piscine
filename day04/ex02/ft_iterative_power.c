/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:44:36 by apcharpe          #+#    #+#             */
/*   Updated: 2020/02/04 19:57:06 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int n;
	int p;

	p = 1;
	n = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		while (p < power)
		{
			n = nb * n;
			p++;
		}
	return (n);
}
