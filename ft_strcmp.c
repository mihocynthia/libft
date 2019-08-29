/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 22:50:39 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 15:24:43 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	*sn1;
	unsigned char	*sn2;

	sn1 = (unsigned char *)s1;
	sn2 = (unsigned char *)s2;
	i = 0;
	while (sn1[i] && sn1[i] == sn2[i])
	{
		i++;
	}
	return (sn1[i] - s2[i]);
}
