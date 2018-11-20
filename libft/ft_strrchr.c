/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:45:49 by adlabban          #+#    #+#             */
/*   Updated: 2017/11/14 04:47:31 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *strr;

	strr = NULL;
	while (*s)
	{
		if (*s == (char)c)
			strr = (char *)s;
		s++;
	}
	if (*s == (char)c)
		strr = (char *)s;
	return (strr);
}
