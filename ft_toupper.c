/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 10:46:51 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/22 16:14:39 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_fromlower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_toupper(int c)
{
if (ft_fromlower(c))
	return (c - 32);
else
	return (c);
}

// int     main(int argc, char **argv)
// {
//     int i;

//     i =0;
//     while (argv[1][i])
//     {
//             ft_putchar(ft_toupper(argv[1][i]));
//         i += 1;
//     }
//     ft_putchar('\n');
//     return (0);
// }
