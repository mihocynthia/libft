/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:25:49 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 14:28:27 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{

	size_t			i;
	unsigned char	*sn;
	unsigned char	*sn2;

	if (len == 0 || dst == src)
		return (dst);
	sn = (unsigned char *)dst;
	sn2 = (unsigned char *)src;
	i = 0;
	if (sn > sn2)
	{
		while (len-- > 0)
		{
			sn[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		while (i < len)
		{
			sn[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}
