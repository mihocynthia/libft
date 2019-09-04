/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 11:49:38 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 19:38:58 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sig;
	int		awsr;

	awsr = 0;
	sig = 1;

	while (*str == ' ' || *str == '\f' || *str == '\r' ||
			*str == '\n' || *str == '\t' || *str == '\v')
		str++;
	if (*str == '+')
	{
		sig = 1;
		str++;
	}
	else if (*str == '-')
	{
		sig = -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		awsr = (awsr * 10) + (*str - '0');
		str++;
	}
	return (sig * awsr);
}