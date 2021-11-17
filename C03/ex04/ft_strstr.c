/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:00:35 by nattia            #+#    #+#             */
/*   Updated: 2021/08/18 13:24:30 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	fail;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			fail = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					fail = 1;
				i++;
			}
			if (fail == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
