/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 21:41:15 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/30 22:47:45 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_countwords(const char *s, char c)
{
    size_t  count;
    int     num;

    count = 0;
    num = 0;
    while (*s)
    {
        if (!num && *s != c)
            count++;
        num = (*s == c) ? 0 : 1;
        s++;
    }
    return (count);
}