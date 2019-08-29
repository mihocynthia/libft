/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:42:24 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 14:14:17 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The memccpy() function copies bytes from memory s2 into s1, stopping after
**the first occurence of c has been copied, or after n bytes have been copied,
**which ever comes first.The memccpy() function returns a pointer to the next
**character in dest after c, or NULL if c was not found in the first n
**characters of src
*/

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*src_ret;
	unsigned char	*dst_ret;
	unsigned char	c_ret;
	int				i;

	i = -1;
	src_ret = (unsigned char *)src;
	dst_ret = (unsigned char *)dst;
	c_ret = (unsigned char)c;
	while (n--)
	{
		i++;
		dst_ret[i] = src_ret[i];
		if (src_ret[i] == c_ret)
		{
			return ((void *)&(dst_ret[i + 1]));
		}
	}
	return (NULL);
}
