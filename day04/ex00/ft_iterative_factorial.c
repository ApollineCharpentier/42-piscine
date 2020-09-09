/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 16:51:35 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/07 19:54:34 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int n;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	else
		n = nb;
	while (i < nb)
	{
		n = n * (nb - i);
		i++;
	}
	return (n);
}
