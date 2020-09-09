/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 10:41:01 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/03 15:14:54 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putchar_3(char a, char b, char c)
{
	if (a == '7' && b == '8' && c == '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		return ;
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	{
		while (a <= '7')
		{
			b = a + 1;
			while (b <= '8')
			{
				c = b + 1;
				while (c <= '9')
				{
					ft_putchar_3(a, b, c);
					c++;
				}
				b++;
			}
			a++;
		}
	}
}
