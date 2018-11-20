/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 17:19:07 by adlabban          #+#    #+#             */
/*   Updated: 2017/07/06 17:26:53 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = nb;
	while (--power > 0)
		result *= nb;
	return (result);
}
