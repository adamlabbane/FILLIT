/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/05 15:02:57 by adlabban          #+#    #+#             */
/*   Updated: 2018/03/22 04:22:11 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct			s_point
{
	int					i;
	int					j;
}						t_point;

typedef struct			s_tetrimino
{
	t_point				points[4];
	char				letter;
}						t_tetrimino;

typedef struct			s_map
{
	char				**tab;
	int					size;
}						t_map;

int						baktrak(t_map map, t_tetrimino *ttrmns, int n, int cpt);
int						check(char *str);
int						check_j(char *str);
int						check_t(char *str);
int						check_s(char *str);
int						check_l(char *str);
int						check_i_o(char *str);
void					pop(t_map map, char c);
int						can_put(t_tetrimino piece, t_map map, int y, int x);
int						pos(t_tetrimino piece, t_map map, int y, int x);
char					**read_file(char *file_name, int *retsize);
void					parse_piece(char *piece, t_tetrimino *tetrimino);
void					puttab(char **tab);
char					**create_map(size_t n);
void					put_in_map(char **tab, t_point *points);
int						check_tetri(char *chr);
#endif
