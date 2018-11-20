/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 04:57:11 by adlabban          #+#    #+#             */
/*   Updated: 2017/11/16 22:39:10 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;
	size_t	i;

	i = 0;
	if (!(mem = malloc(sizeof(void *) * size)))
		return (NULL);
	while (i < size)
	{
		((char*)mem)[i] = '\0';
		i++;
	}
	return (mem);
}
