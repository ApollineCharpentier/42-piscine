/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_calculate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 20:08:09 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/22 16:51:26 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		operator(char *str)
{
	if (str[1] != '\0')
		return (5);
	if (str[0] == '+')
		return (0);
	if (str[0] == '-')
		return (1);
	if (str[0] == '*')
		return (2);
	if (str[0] == '/')
		return (3);
	if (str[0] == '%')
		return (4);
	return (5);
}

int		calculate(int a, int b, int op)
{
	int		(*table[5])(int, int);

	table[0] = &ft_sum;
	table[1] = &ft_subtract;
	table[2] = &ft_multiply;
	table[3] = &ft_divide;
	table[4] = &ft_modulo;
	return (table[op](a, b));
}

int		main(int argc, char **argv)
{
	int op;

	if (argc != 4)
		return (0);
	op = operator(argv[2]);
	if (op == 5)
	{
		ft_putstr("0\n");
		return (0);
	}
	if (op == 3 && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	if (op == 4 && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	ft_putnbr(calculate(ft_atoi(argv[1]), ft_atoi(argv[3]), op));
	ft_putchar('\n');
	return (0);
}
