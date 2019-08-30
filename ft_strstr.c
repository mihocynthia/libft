/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 00:48:39 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 22:09:58 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)

/*
**function locates the first occurrence of the null-terminated string needle
**in the null-terminated string haystack. Return values: If needle is an
**empty string, haystack is returned; if needle occurs nowhere in haystack,
**NULL is returned; otherwise a pointer to the first character of the first
**occurrence of needle is returned.
*/

{
	int		i;
	char	*hay_ret;
	char	*need_ret;

	i = 0;
	hay_ret = (char *)haystack;
	need_ret = (char *)needle;
	if (!need_ret || !*need_ret)
		return (hay_ret);
	while (hay_ret[i] != '\0')
	{
		if (ft_strcmp(&hay_ret[i], need_ret) == 0)
			return (&hay_ret[i]);
		else
			hay_ret++;
	}
	return (NULL);
}
