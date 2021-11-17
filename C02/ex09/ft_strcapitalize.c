/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:27:56 by nattia            #+#    #+#             */
/*   Updated: 2021/08/16 10:34:07 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_test_spe(char c)
{
	if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9')))
	{
		return (1);
	}
	return (0);
}

char	ft_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

char	ft_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		if (ft_test_spe(str[i - 1]))
		{
			n = 1;
		}
		if (n == 1)
		{
			str[i] = ft_upper(str[i]);
			n = 0;
		}
		else
		{
			str[i] = ft_lower(str[i]);
		}
		i++;
	}
	return (str);
}
