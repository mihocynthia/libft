/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 20:40:20 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 02:49:52 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*memnew;
	unsigned int		i;
	unsigned int		strlen;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	strlen = ft_strlen(s);
	memnew = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!memnew)
		return (NULL);
	while (s[i] != '\0')
	{
		memnew[i] = f(i, s[i]);
		i++;
	}
	memnew[i] = '\0';
	return (memnew);
}
