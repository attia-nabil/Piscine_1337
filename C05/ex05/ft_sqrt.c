/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 10:25:13 by nattia            #+#    #+#             */
/*   Updated: 2021/08/23 10:27:05 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int		i;
	int		n;

	i = 0;
	if (nb == 1)
		return (nb);
	if (nb > 10000000)
	{
		n = nb / 20;
	}
	else
	{
		n = nb / 2;
	}
	while (i < n && n > 0)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}