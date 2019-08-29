/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 17:27:28 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 15:17:32 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** 7 failed 3 okays
*/
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s_ret;

	i = 0;
	s_ret = (char*)s;
	while (i++ && s_ret[i])
	{
		if (s_ret[i] == c)
			return (&s_ret[i]);
	}
	if (s_ret[i] != '\0')
		return (&s_ret[i]);
	return (NULL);
}
