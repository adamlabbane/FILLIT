/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 15:45:03 by adlabban          #+#    #+#             */
/*   Updated: 2018/03/24 00:37:15 by jhacquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	map_init(t_map *map, int size)
{
	map->size = size;
	map->tab = create_map(size);
}

int		main_bis(int tabsize, t_tetrimino *tetriminos, t_map *map, char **tab)
{
	int k;
	int i;
	int j;

	k = 0;
	while (k < tabsize)
	{
		parse_piece(tab[k], &tetriminos[k]);
		k++;
	}
	i = 2;
	map_init(map, i);
	k = -1;
	while (++k < tabsize && (j = -1))
		while (++j < map->size)
			tetriminos[k].letter = 'A' + k;
	return (i);
}

int		main(int argc, char **argv)
{
	int				tabsize;
	char			**tab;
	t_map			map;
	t_tetrimino		*tetriminos;
	int				i;

	if (argc != 2)
		return (0);
	if (!(tab = read_file(argv[1], &tabsize)))
		return (0);
	tetriminos = ft_memalloc(tabsize * sizeof(*tetriminos));
	i = main_bis(tabsize, tetriminos, &map, tab);
	while (!baktrak(map, tetriminos, tabsize, 0))
	{
		i++;
		map_init(&map, i);
	}
	puttab(map.tab);
	return (0);
}
