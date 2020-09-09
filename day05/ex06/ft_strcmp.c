/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 16:58:48 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/11 21:31:26 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i])
	{
		if (i == ft_strlen(s1) && i == ft_strlen(s2))
			return (0);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
