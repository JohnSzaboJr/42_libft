/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 12:33:04 by jszabo            #+#    #+#             */
/*   Updated: 2017/11/20 18:20:44 by jszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
size_t n)
{
	char	*fro;
	char	*to;
	size_t	i;

	fro = (char *)src;
	to = (char *)dst;
	i = 0;
	while (fro[i] != '\0' && i < n)
	{
		to[i] = fro[i];
		if (fro[i] == (char)c)
			return (&to[i + 1]);
		i++;
	}
	return (NULL);
}
