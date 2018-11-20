/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:53:09 by adlabban          #+#    #+#             */
/*   Updated: 2018/03/24 00:37:30 by jhacquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**create_map(size_t n)
{
	char	**map;
	size_t	i;

	i = 0;
	map = (char **)malloc(sizeof(char*) * n + 1);
	while (i < n)
	{
		map[i] = ft_strnew(n + 1);
		map[i] = ft_memset(map[i], '.', n);
		i++;
	}
	map[i] = 0;
	return (map);
}

void		puttab(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putendl(tab[i]);
		i++;
	}
}

void		put_in_map(char **tab, t_point *points)
{
	tab[points->i][points->j] = '#';
}
