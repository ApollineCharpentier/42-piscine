/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 17:47:48 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/07 19:58:04 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb >= 256)
	{
		while (i <= nb / 16)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
		return (1);
	}
	else
		while (i < nb)
		{
			if (nb % i == 0)
				return (0);
			i++;
		}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
		nb = nb + 1;
	return (nb);
}
