/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 21:17:59 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 12:25:20 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	size_t	len;
	char	*str;

	start = 0;
	if (!s)
		return (NULL);
	end = ft_strlen(s);
	while (ft_whitespacestring(s[start]))
		start++;
	while (ft_whitespacestring(s[end - 1]))
		end--;
	if (start > end)
		start = end;
	len = end - start;
	str = ft_strsub(s, start, len);
	if(str == NULL)
		return NULL;
	str[len] = '\0';
	return (str);
}
