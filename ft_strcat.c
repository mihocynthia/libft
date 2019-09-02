/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 00:19:47 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/02 09:17:55 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int				i;
	int				j;
	unsigned char	*s1_return;
	unsigned char	*s2_return;

	i = 0;
	j = 0;
	s1_return = (unsigned char *)s1;
	s2_return = (unsigned char *)s2;
	while (s1_return[i] != '\0')
	{
		i++;
	}
	while (s2_return[j] != '\0')
	{
		s1_return[i++] = s2_return[j++];
	}
	s1_return[i] = s2_return[j];
	return ((char *)s1_return);
}
