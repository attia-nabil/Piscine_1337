/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:36:36 by nattia            #+#    #+#             */
/*   Updated: 2021/08/23 10:50:29 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int		i;
	int		n;

	i = 2;
	n = nb / 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= n)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && ft_is_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
