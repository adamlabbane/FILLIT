/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 01:30:17 by adlabban          #+#    #+#             */
/*   Updated: 2017/11/14 19:52:14 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (s < d)
	{
		s = s + len;
		d = d + len;
		while (len-- > 0)
			*(--d) = *(--s);
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}
