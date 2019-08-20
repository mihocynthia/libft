/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 13:18:26 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/17 14:56:50 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int i;

	i = 0;
	//changes the value of ascii
	//(*s + i)
	// s[i] + i
	// changes the value of the address
	//*(s + i) 
	//s[i + i]
	//s[i]
	while (*(s + i) != '\0')
	{
		ft_putchar (*(s + i));
		i++;
	}
}
