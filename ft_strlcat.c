/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 23:12:40 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 00:10:44 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**appends string src to the end of dst.  It will append at most
**dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
**dstsize is 0 or the original dst string was longer than dstsize (in practice
**this should not happen as it means that either dstsize is incorrect or that
**dst is not a proper string).
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	d;

	i = 0;
	d = dsize - ft_strlen(dst);
	if ((*dst != '\0') && (*src != '\0'))
	{
		while ((*dst != '\0'))
			dst++;
		while (*src != '\0' && i < d)
		{
			i++;
			*dst++ = *src++;
		}
		*dst = '\0';
	}
	return (i + dsize);
}
