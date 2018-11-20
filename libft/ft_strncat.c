/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 19:50:15 by adlabban          #+#    #+#             */
/*   Updated: 2017/11/14 02:03:17 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t k;

	k = 0;
	i = 0;
	while (dest[k])
		k++;
	while (src[i] != '\0' && (i < n))
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
