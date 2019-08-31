/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:48:39 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/30 19:16:51 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_fromupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_tolower(int c)
{
	if (ft_fromupper(c))
		return (c + 32);
	else
		return (c);
}
