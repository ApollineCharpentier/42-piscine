/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 11:06:16 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/11 22:08:40 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int		index_base(char *str, char a)
{
	int i;

	i = 0;
	while (str[i] != a)
	{
		i++;
		return (i);
	}
	return (0);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int n;
	int neg;

	neg = 0;
	i = 0;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		n = n * ft_strlen(base);
		n = n + index_base(base, str[i]);
		i++;
	}
	if (neg == -1)
		return (-n);
	else
		return (n);
}
