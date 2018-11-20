/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baktrak.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 04:57:23 by adlabban          #+#    #+#             */
/*   Updated: 2018/03/24 00:37:36 by jhacquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		baktrak(t_map map, t_tetrimino *ttrmns, int n, int cpt)
{
	int y;
	int x;

	if (cpt == n)
		return (1);
	y = -1;
	while (++y < map.size && (x = -1))
		while (++x < map.size)
			if (can_put(ttrmns[cpt], map, y, x))
			{
				pos(ttrmns[cpt], map, y, x);
				if (baktrak(map, ttrmns, n, cpt + 1))
					return (1);
				pop(map, ttrmns[cpt].letter);
			}
	return (0);
}
