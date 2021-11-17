/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nattia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:17:45 by nattia            #+#    #+#             */
/*   Updated: 2021/08/25 16:19:39 by nattia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;
	int		s_len;

	s_len = 0;
	while (src[s_len])
		s_len++;
	copy = (char *)malloc(sizeof(char) * (s_len + 1));
	i = 0;
	if (copy == NULL)
		return (NULL);
	else
	{
		while (src[i] != '\0')
		{
			copy[i] = src[i];
			i++;
		}
		copy[i] = '\0';
		return (copy);
	}
}
