/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 20:02:32 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/22 13:49:37 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
void	ft_putnbr (int n);
int		ft_atoi(char *str);
int		ft_sum(int a, int b);
int		ft_subtract(int a, int b);
int		ft_multiply(int a, int b);
int		ft_divide(int a, int b);
int		ft_modulo(int a, int b);
int		ft_calculate(int a, int b);

#endif
