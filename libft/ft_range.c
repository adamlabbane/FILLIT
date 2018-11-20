/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 23:39:40 by adlabban          #+#    #+#             */
/*   Updated: 2017/11/19 02:25:32 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			*ft_range(int min, int max)
{
	int i;
	int *tab;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (NULL);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
