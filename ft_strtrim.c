/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 21:17:59 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 09:55:19 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	size_t	len;

	start = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s);
	while (ft_whitespacestring(s[start]))
		start++;
	while (ft_whitespacestring(s[end]))
		end--;
	if (start > end)
		start = end;
	len = end - start;
	return (ft_strsub(s, start, len));
}
