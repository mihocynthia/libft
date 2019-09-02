/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 17:02:32 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/01 18:38:10 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Lexicographical comparison between s1 and s2. If the 2 strings are identical
**the function returns 1, or 0 otherwise.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	int		check;

	check = ft_strcmp((char*)s1, (char*)s2);
	if (check == 0)
		return (1);
	else
		return (0);
}
