/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 03:27:39 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/01 19:52:10 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*word;
	int		i1;
	int		i2;

	i1 = 0;
	i2 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	word = (char*)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	while (s1[i1] != '\0')
	{
		word[i1] = s1[i1];
		i1++;
	}
	while (s2[i2] != '\0')
	{
		word[i1++] = s2[i2++];
	}
	word[i1] = '\0';
	return (word);
}
