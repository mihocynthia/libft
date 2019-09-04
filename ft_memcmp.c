/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 22:29:10 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 17:33:09 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ret;
	unsigned char	*s2_ret;
	size_t			size;

	size = 0;
	if (!s1 && !s2)
		return (0);
	s1_ret = (unsigned char *)s1;
	s2_ret = (unsigned char *)s2;
	while (size < n)
	{
		if (*s1_ret != *s2_ret)
			return (*s1_ret - *s2_ret);
		size++;
		s1_ret++;
		s2_ret++;
	}
	return (0);
}
