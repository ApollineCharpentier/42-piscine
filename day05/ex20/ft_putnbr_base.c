/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 21:29:35 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/11 22:06:27 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}

int		base_test(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i + 1] != '\0')
	{
		j = 1;
		while (str[i + j] != '\0')
		{
			if (str[i] == str[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int base_len;

	base_len = ft_strlen(base);
	if (base_len == 0 || base_len == 1 || base_test(base) == 0)
		return ;
	if (nbr > base_len - 1)
	{
		ft_putnbr_base(nbr / base_len, base);
	}
	ft_putchar(base[nbr % base_len]);
}
