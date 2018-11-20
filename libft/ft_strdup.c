/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 03:31:45 by adlabban          #+#    #+#             */
/*   Updated: 2017/11/19 03:22:13 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *new_str;

	if (!(new_str = (char*)malloc(sizeof(*new_str) * (ft_strlen(s1) + 1))))
		return (NULL);
	return (ft_strcpy(new_str, s1));
}
