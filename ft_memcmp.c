/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 22:29:10 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/31 03:03:39 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ret;
	unsigned char	*s2_ret;
	int				size;

	size = 0;
	s1_ret = (unsigned char *)s1;
	s2_ret = (unsigned char *)s2;
	while (*s1_ret == *s2_ret && size < n)
	{
		s1_ret++;
		s2_ret++;
		size++;
	}
	if (size == n)
		return (0);
	return (*s2_ret - *s1_ret);
}
