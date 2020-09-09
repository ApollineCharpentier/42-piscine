/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 11:55:06 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/03 15:58:01 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_affichage(int nb)
{
	int a;
	int b;

	if (nb > 9)
	{
		a = nb / 10;
		b = nb % 10;
		ft_putchar(a + 48);
		ft_putchar(b + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int nb1;
	int nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		while (nb2 <= 98)
		{
			nb2++;
			{
				ft_affichage(nb1);
				ft_putchar(' ');
				ft_affichage(nb2);
				if (nb1 == 98 && nb2 == 99)
				{
					return ;
				}
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		nb2 = nb1 + 1;
		nb1++;
	}
}
