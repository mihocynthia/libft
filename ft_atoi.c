/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 11:49:38 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/22 17:28:52 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sig;
	int		awsr;

	awsr = 0;
	sig = 1;
	if (str)
	{
		while (*str == ' ' || *str == '\f' || *str == '\r' ||
				*str == '\n' || *str == '\t' || *str == '\v')
				str++;
		if (*str == '+' && str++)
			sig = 1;
		else if (*str == '-' && str++)
			sig = -1;
		while (*str && *str >= '0' && *str <= '9')
			awsr = awsr * 10 + (*str++ - '0');
	}
	return (sig * awsr);
	write (1, "\n", 1);
}

int main()
{
	int n;
	n = ft_atoi(" - 124   123   ");


	// printf("\n");
	printf("%d\n", n);

}
