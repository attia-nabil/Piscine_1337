/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 08:06:02 by nattia            #+#    #+#             */
/*   Updated: 2021/08/09 19:30:09 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	putchar(char c)
{
	write(1, &c, 1);
}

void	comb(int a, int b, int c)
{
	putchar(a + '0');
	putchar(b + '0');
	putchar(c + '0');
	if (a != 7)
	{
		putchar(',');
		putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				comb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
