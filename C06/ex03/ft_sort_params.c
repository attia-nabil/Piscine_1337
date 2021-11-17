/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:01:53 by nattia            #+#    #+#             */
/*   Updated: 2021/08/22 13:08:49 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_params(char **par, int ac)
{
	int	i;

	i = 0;
	while (++i < ac)
	{
		ft_putstr(par[i]);
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*tmp;

	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
		{
			j = i;
			while (++j < argc)
			{
				if (ft_strcmp(argv[i], argv[j]) > 0)
				{
					tmp = argv[i];
					argv[i] = argv[j];
					argv[j] = tmp;
				}
			}	
		}
		ft_print_params(argv, argc);
	}
	return (0);
}
