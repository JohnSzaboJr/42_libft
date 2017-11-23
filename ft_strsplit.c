/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:56:29 by jszabo            #+#    #+#             */
/*   Updated: 2017/11/23 14:00:41 by jszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char			**arr;
	unsigned int	i;
	unsigned int	j;
	size_t			k;

	i = 0;
	k = 0;
	arr = (char **)malloc(sizeof(*arr) * (ft_count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (k < ft_count_words(s, c))
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			j++;
			i++;
		}
		arr[k] = ft_strsub(s, i - j, j);
		k++;
	}
	arr[k] = 0;
	return (arr);
}
