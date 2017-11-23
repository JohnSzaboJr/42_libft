/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:34:37 by jszabo            #+#    #+#             */
/*   Updated: 2017/11/21 13:24:36 by jszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*a;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] || !needle[j])
		{
			if (needle[j])
				j++;
			if (needle[j] == '\0')
			{
				a = malloc(sizeof(*a) * ft_strlen(&haystack[i]) + 1);
				if (a)
				{
					free(a);
					return (ft_strcpy(a, &haystack[i]));
				}
			}
		}
		i++;
	}
	return (0);
}
