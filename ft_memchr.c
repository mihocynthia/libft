/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:15:55 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 17:54:58 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	//const char	*str;
	unsigned char *str;
	size_t		i;

	i = 0;
	str = (unsigned char*)s;
	if (n == 0)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
		{
			return ((void*)&str[i]);
		}
		i++;
	}
	return (NULL);
}
