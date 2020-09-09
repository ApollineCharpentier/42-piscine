/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:01:40 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/11 21:47:22 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] + 'A' - 'a';
	i = 1;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z'
				&& (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z'))
			str[i] = str[i] + 'A' - 'a';
		if (str[i] >= 'A' && str[i] <= 'Z'
				&& str[i - 1] >= 'a' && str[i - 1] <= 'z')
			str[i] = str[i] + 'a' - 'A';
		if (str[i] >= 'A' && str[i] <= 'Z'
				&& str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			str[i] = str[i] + 'a' - 'A';
		i++;
	}
	return (str);
}
