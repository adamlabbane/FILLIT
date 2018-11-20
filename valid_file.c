/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetriminos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:04:02 by adlabban          #+#    #+#             */
/*   Updated: 2018/03/19 04:05:25 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			check_norme(char *str)
{
	int		diese;
	int		dot;
	int		n;
	int		i;

	diese = 0;
	dot = 0;
	n = 0;
	i = 0;
	if (str == NULL)
		return (0);
	while (i < 20)
	{
		if (str[i] == '#')
			diese++;
		if (str[i] == '.')
			dot++;
		if (str[i] == '\n' && ((i + 1) % 5 == 0))
			n++;
		i++;
	}
	if (diese == 4 && dot == 12 && n == 4)
		return (1);
	return (0);
}

int			check(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if ((check_norme(str)) && ((check_i_o(str))
					|| (check_l(str)) || (check_s(str))
					|| (check_t(str)) || (check_j(str))))
			return (1);
		i++;
	}
	return (0);
}
