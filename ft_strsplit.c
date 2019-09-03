/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 03:05:12 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/02 23:53:16 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		r1;

	r1 = 0;
	if (!s)
		return (NULL);
	t = (char **)ft_memalloc(sizeof (char *) * (ft_countword(s, c) + 1));
	if (!t)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			t[r1] = ft_mallocword(s, c);
			r1++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	t[r1] = 0;
	return (t);
}
