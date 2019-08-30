/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:48:39 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 20:56:44 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_fromupper(int c)
{
	//return bool 1 if true or 0 if false
	return (c >= 'A' && c <= 'Z');
}

int		ft_tolower(int c) //'A' 65
{
	// printf("func |%d|\n",fromupper(c));
	if (ft_fromupper(c))
		return (c + 32);
	else
		return (c);
}
