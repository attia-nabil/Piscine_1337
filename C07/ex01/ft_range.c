/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:22:27 by nattia            #+#    #+#             */
/*   Updated: 2021/08/25 16:22:55 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*rng;
	int	i;

	if (min >= max)
		return (NULL);
	rng = (int *)malloc(sizeof(int) * (max - min));
	if (rng == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < (max - min))
		{
			rng[i] = min + i;
			i++;
		}
		return (rng);
	}
}
