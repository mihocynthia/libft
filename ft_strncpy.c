/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 11:07:05 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/27 00:02:24 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dest, char *src, unsigned int nl)
{
	unsigned int i;
	unsigned int len;

	len = (unsigned int)ft_strlen(src);
	i = 0;
	if (len <= nl)
	{
		while (i < len)
		{
			dest[i] = src[i];
			i += 1;
		}
		while (i < nl)
			dest[i++] = '\0';
		return (dest);
	}
	else
	{
		while (i < nl)
		{
			dest[i] = src[i];
			i += 1;
		}
		return (dest);
	}
	
	// char *start;
	// unsigned int i;

	// i = 0;
	// start = dest;
	// while (*src != '\0' && i < nl)
	// {
	// 	*dest = *src;
	// 	*src += 1;
	// 	*dest += 1;
	// 	i++;
	// }
	// *dest = '\0';
	// return (dest);
}
