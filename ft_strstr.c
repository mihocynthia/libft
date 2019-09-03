/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 00:48:39 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 02:29:16 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t		h;
	size_t		n;
	char		*hay_ret;
	char		*need_ret;
	size_t		needle_ex;

	h = 0;
	n = 0;
	hay_ret = (char *)haystack;
	need_ret = (char *)needle;
	if (!(needle_ex = ft_strlen(need_ret)))
		return (hay_ret);
	while (hay_ret[h] != '\0')
	{
		while (need_ret[n] && need_ret[n] == hay_ret[h + n])
			n++;
		if (n == needle_ex)
			return (&hay_ret[h]);
		h++;
	}
	return (NULL);
}
