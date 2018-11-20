/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 23:21:48 by adlabban          #+#    #+#             */
/*   Updated: 2018/01/13 12:28:54 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 0;
	nb = 0;
	while ((str[i] == ' ') || (str[i] == '\n') || (str[i] == '\t') ||
			(str[i] == '\r') || (str[i] == '\v') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		neg = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += (str[i] - '0');
		i++;
	}
	if (neg == 1)
		return (-nb);
	else
		return (nb);
}
