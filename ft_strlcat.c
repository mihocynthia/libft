/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 23:12:40 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 21:17:13 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**appends string src to the end of dst.  It will append at most
**dstsize - strlen(dst) - 1 characters.  It will then NUL-terminate, unless
**dstsize is 0 or the original dst string was longer than dstsize (in practice
**this is not a proper string).
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	lgth;
	size_t	final;

	lgth = ft_strlen(dst);
	if (dsize <= lgth)
		return (dsize + ft_strlen(src));
	final = (dsize - lgth - 1);
	while (final > 0 && *src)
	{
		dst[lgth++] = *(src++);
		final--;
	}
	dst[lgth] = '\0';
	return (lgth + ft_strlen(src));
}
