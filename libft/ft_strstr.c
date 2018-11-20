/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 22:49:19 by adlabban          #+#    #+#             */
/*   Updated: 2017/11/14 19:56:04 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int i;
	int j;

	if (!*str2)
		return ((char*)str1);
	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str2[j] == str1[i + j])
		{
			if (str2[j + 1] == '\0')
				return (char*)(str1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
