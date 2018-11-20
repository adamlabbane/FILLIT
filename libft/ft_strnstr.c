/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:52:40 by adlabban          #+#    #+#             */
/*   Updated: 2017/11/19 03:20:15 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t len2;

	if (!*little)
		return ((char*)big);
	len2 = ft_strlen(little);
	while (*big && len-- >= len2)
	{
		if (*big == *little && ft_memcmp(big, little, len2) == 0)
			return ((char*)big);
		big++;
	}
	return (NULL);
}
