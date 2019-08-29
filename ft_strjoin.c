/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 03:27:39 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 16:06:33 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strjoin(char const *s1, char const *s2)
/*
**Allocates (with malloc(3)) and returns a “fresh” string end- ing with
**’\0’, result of the concatenation of s1 and s2. If the allocation fails
**the function returns NULL. Return "fresh" string result of combination
**of 2 strings
*/
{
	int		len;
	char	*word;

	len = ft_strlen(s1) + ft_strlen(s2);
	word = (char)malloc(sizeof(char) * len + 1);
	while (*s1)
		s1++;
	while (*s2)
		s2++;
	return (word);
}
