/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 11:07:05 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/20 10:56:03 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncpy(char *dest, char *src, unsigned int nl)
{
	char start;

	start = *dest;
	{
		while (*src != '\0')
		{
			*src = *dest;
			*src += 1;
			*dest += 1;
		}
		*dest != '\0';
		return (start);
	}
}
