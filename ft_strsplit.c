/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 03:05:12 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/02 19:16:18 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		r1;
	int		r2;
	int		r3;
	int		r4;

	if (!s)
		return (NULL);
	if (!(t = (char **)ft_memalloc((ft_countword(s, c) + 1) * sizeof(char *))))
		return (NULL);
	r1 = 0;
	r2 = 0;
	r3 = 0;
	r4 = 0;
	while (s[r1++])
	{
		if (r2 && s[r1] == c)
			t[r3++] = ft_strsub(s, r4, r1 - r4);
		if (!r2 && s[r1] != c)
			r4 = r3;
		r2 = (s[r1] == c) ? 0 : 1;
	}
	if (r2)
		t[r1] = ft_strsub(s, r4, r1 - r4);
	return (t);
}
