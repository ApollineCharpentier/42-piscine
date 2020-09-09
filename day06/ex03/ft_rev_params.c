/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:49:47 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/13 15:20:58 by apcharpe         ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int i;
	int j;

	(void)argc;
	i = 0;
	j = 0;
	while (argv[i] != '\0')
		i++;
	j = i - 1;
	while (j > 0)
	{
		ft_putstr(argv[j]);
		ft_putchar('\n');
		j--;
	}
	return (0);
}
