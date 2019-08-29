/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 01:22:48 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/29 14:35:42 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	int		tenths;

	tenths = 1;
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	while (n / tenths >= 10)
		tenths *= 10;
	while (tenths >= 1)
	{
		ft_putchar(n / tenths + 48);
		n %= tenths;
		tenths /= 10;
	}
}
