/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 11:07:05 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/07 15:22:39 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
