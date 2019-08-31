/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 19:34:21 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/31 03:19:12 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	int		i;

	if (s == NULL || f == NULL)
		return (NULL);
	map = ft_strnew(ft_strlen(s));
	if (map == NULL)
		return (NULL);
	ft_strcpy(map, s);
	i = 0;
	while (*(map + i++))
		*(map + i) = f(*(map + i));
	return (map);
}
