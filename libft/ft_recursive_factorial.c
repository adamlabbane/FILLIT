/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adlabban <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 17:06:03 by adlabban          #+#    #+#             */
/*   Updated: 2017/07/06 17:14:15 by adlabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb >= 13)
		return (0);
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
