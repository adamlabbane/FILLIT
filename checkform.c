/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readfi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/31 06:18:51 by adlabban          #+#    #+#             */
/*   Updated: 2018/03/24 00:37:41 by jhacquar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_i_o(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 2] == '#' && str[i + 3] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 10] == '#' && str[i + 15] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 5] == '#' && str[i + 6] == '#')
			return (1);
		i++;
	}
	return (0);
}

int		check_l(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 5] == '#' && str[i + 10] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 6] == '#' && str[i + 11] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 10] == '#' && str[i + 11] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 9] == '#' && str[i + 10] == '#')
			return (1);
		i++;
	}
	return (0);
}

int		check_s(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 6] == '#' && str[i + 7] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 4] == '#' && str[i + 5] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 4] == '#' &&
				str[i + 5] == '#' && str[i + 9] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 6] == '#' && str[i + 11] == '#')
			return (1);
		i++;
	}
	return (0);
}

int		check_t(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if (str[i] == '#' && str[i + 4] == '#' &&
				str[i + 5] == '#' && str[i + 6] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 2] == '#' && str[i + 6] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 6] == '#' && str[i + 10] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 4] == '#' &&
				str[i + 5] == '#' && str[i + 10] == '#')
			return (1);
		i++;
	}
	return (0);
}

int		check_j(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
		return (0);
	while (i < 21)
	{
		if (str[i] == '#' && str[i + 5] == '#' &&
				str[i + 6] == '#' && str[i + 7] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 3] == '#' &&
				str[i + 4] == '#' && str[i + 5] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 2] == '#' && str[i + 5] == '#')
			return (1);
		else if (str[i] == '#' && str[i + 1] == '#' &&
				str[i + 2] == '#' && str[i + 7] == '#')
			return (1);
		i++;
	}
	return (0);
}
