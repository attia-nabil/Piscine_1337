/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:34:44 by nattia            #+#    #+#             */
/*   Updated: 2021/08/22 15:03:33 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	tab[2];

	tab[0] = -1;
	while (tab[0] < 98)
	{
		tab[0]++;
		tab[1] = tab[0];
		while (tab[1] < 99)
		{
			tab[1]++;
			ft_putchar((tab[0] / 10) + 48);
			ft_putchar((tab[0] % 10) + 48);
			ft_putchar(' ');
			ft_putchar((tab[1] / 10) + 48);
			ft_putchar((tab[1] % 10) + 48);
			if (tab[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
