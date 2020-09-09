/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 21:05:44 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/20 19:26:16 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*src2;

	if (!(src2 = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (0);
	i = 0;
	while (src[i])
	{
		src2[i] = src[i];
		i++;
	}
	src2[i] = '\0';
	return (src2);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_par	*par;

	if (!(par = (struct s_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (0);
	i = 0;
	while (i < ac)
	{
		par[i].size_param = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = ft_strdup(av[i]);
		par[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	par[i].str = 0;
	return (par);
}
