/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:23:16 by nattia            #+#    #+#             */
/*   Updated: 2021/08/25 16:23:36 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*rng;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	rng = (int *)malloc(sizeof(int) * (max - min));
	if (rng == NULL)
		return (-1);
	else
	{
		i = 0;
		while (i < (max - min))
		{
			rng[i] = min + i;
			i++;
		}
		*range = rng;
		return (i);
	}
}
