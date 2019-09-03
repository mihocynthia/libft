/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mallocword.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 23:14:48 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/02 23:21:51 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_mallocword(char const *s, char c)
{
	int		let;
	char	*word;

	let = 0;
	while (!s[let] && !s[let] != c)
		let++;
	word = (char *)malloc(sizeof(char) * (let + 1));
	if (word == NULL)
		return (NULL);
	let = 0;
	while (s[let] != '\0' && s[let] != c)
	{
		word[let] = s[let];
		let++;
	}
	word[let] = '\0';
	return (word);
}
