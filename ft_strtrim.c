/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 21:17:59 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/31 04:00:30 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	while (ft_whitespacestring(s[start]))
		start++;
	while (ft_whitespacestring(s[end]))
		end--;
	if (start > end)
		start = end;
	return (ft_strsub(s, start, end - start));
}
