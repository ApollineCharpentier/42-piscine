/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:20:47 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/20 19:15:52 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

t_stock_par		*ft_param_to_tab(int ac, char **av);
void			ft_show_tab(struct s_stock_par *par);
void			ft_putstr(char *str);
void			ft_putchar (char c);
void			ft_putnbr(int n);
void			create_table(char **tab);

#endif
