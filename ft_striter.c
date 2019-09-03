/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 21:19:59 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 03:13:40 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Applies the function f to each index of the array pointed to s. string to
**function.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int	pts;

	pts = 0;
	if (s && f == NULL)
		return ;
	while (s[pts] != '\0')
	{
		f(s + pts);
		pts++;
	}
}
