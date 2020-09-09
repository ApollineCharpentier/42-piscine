/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apcharpe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 19:45:48 by apcharpe          #+#    #+#             */
/*   Updated: 2018/08/20 16:54:46 by apcharpe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

void	ft_putstr(char *str);

# define TRUE 1

# define FALSE 0

# define EVEN(nbr) (nbr + 1) % 2

typedef int	t_bool;
t_bool	ft_is_even(int nbr);

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0

#endif
