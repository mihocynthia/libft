/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 11:07:05 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/24 15:12:37 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strncpy(char *dest, char *src, unsigned int nl)
{
	char *start;
	unsigned int i;

	i = 0;
	start = dest;
	while (*src != '\0' && i < nl)
	{
		*dest = *src;
		*src += 1;
		*dest += 1;
		i++;
	}
	*dest = '\0';
	return (dest);
}
