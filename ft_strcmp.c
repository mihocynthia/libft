/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 22:50:39 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/27 00:16:33 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char *s1, char *s2)
{
	int	i;
	unsigned char *simon1;
	unsigned char *simon2;

	simon1 = (unsigned char *)s1;
	simon2 = (unsigned char *)s2;
	i = 0;
	while (simon1[i] && simon1[i] == simon2[i])
	{
		i++;
	}
	return (simon1[i] - simon2[i]);
}

