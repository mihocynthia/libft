/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:27:28 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 15:10:44 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_ret;

	s_ret = (char*)s;
	i = 0;
	if (c == '\0')
		return (&s_ret[i + ft_strlen(s_ret)]);
	while (s_ret[i])
	{
		if (s_ret[i] == c)
			return (&s_ret[i]);
		i++;
	}
	return (NULL);
}
