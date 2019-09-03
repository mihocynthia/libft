/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 15:18:00 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/03 14:39:52 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		sig;
	int		awsr;
	char	*str;
	int		c;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	awsr = n;
	sig = (n < 0) ? ft_numbercount(n) + 1 : ft_numbercount(n);
	str = ft_strnew(sig + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, sig);
	while (sig--)
	{
		c = awsr % 10;
		str[sig] = c < 0 ? -c + '0' : c + '0';
		awsr /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
