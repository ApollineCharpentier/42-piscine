/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:56:13 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/16 19:22:53 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		output_size(int argc, char **argv)
{
	int i;
	int j;
	int k;

	if (argc == 0)
		return (0);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			k++;
			j++;
		}
		k++;
		i++;
	}
	return (k);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*output;

	if (!(output = (char*)malloc((sizeof(char) * output_size(argc, argv)))))
		return (0);
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			output[k] = argv[i][j];
			j++;
			k++;
		}
		output[k] = '\n';
		k++;
		i++;
	}
	output[k - 1] = '\0';
	return (output);
}
