/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:27:55 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 12:53:26 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The strnstr() function locates the first occurrence of the null-terminated
**string needle in the string haystack, where not more than len characters are
**searched.Characters that appear after a `\0' character are not searched.
**Since the strnstr() function is a FreeBSD specific API, it should only be
**used when portability is not a**concern.
*/

#include "libft.h"

char	*ft_strnstr(const char *bg, const char *sm, size_t len)
{
	size_t	needle_len;
	char	*haystack;
	char	*needle;

	haystack = (char *)bg;
	needle = (char *)sm;
	needle_len = ft_strlen(sm);
	if (!needle || !*needle || len == 0)
		return (haystack);
	while (*haystack != '\0' && len)
	{
		if (len < needle_len)
			break ;
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return (haystack);
		else
			haystack++;
		len--;
	}
	return (NULL);
}
