/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:51:51 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/30 00:03:00 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s_ret;

	i = 0;
	s_ret = ((char *)s);
	if (s[i] == '\0')
		return (NULL);
	while (s_ret[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s_ret[i] == c)
			return (&s_ret[i]);
		i--;
	}
	return (NULL);
}
