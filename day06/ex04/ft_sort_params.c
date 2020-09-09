/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 12:39:10 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/13 15:21:21 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

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

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	(void)argc;
	i = 0;
	j = 1;
	while (i < argc - 1)
	{
		if (i < argc - 1 && ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	while (j < argc)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j++;
	}
	return (0);
}
