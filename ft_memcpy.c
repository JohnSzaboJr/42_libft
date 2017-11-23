/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jszabo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:17:25 by jszabo            #+#    #+#             */
/*   Updated: 2017/11/20 18:17:32 by jszabo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*to;
	char	*frm;

	to = (char *)dst;
	frm = (char *)src;
	i = 0;
	while (i < n)
	{
		to[i] = frm[i];
		i++;
	}
	dst = to;
	return (dst);
}
