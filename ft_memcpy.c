/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 11:45:42 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/02 16:23:05 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_c;
	const char	*src_c;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	dst_c = (char *)dst;
	src_c = (const char *)src;
	if (n == 0)
		return (dst_c);
	while (n > i)
	{
		dst_c[i] = src_c[i];
		i++;
	}
	return (dst_c);
}
