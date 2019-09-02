/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 03:05:12 by cyluu             #+#    #+#             */
/*   Updated: 2019/09/01 19:12:13 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns an array of “fresh” strings (all
**ending with ’\0’, including the array itself) ob- tained by spliting s using
**the character c as a delimiter. If the allocation fails the function returns
**NULL. Example : ft_strsplit("*hello*fellow***students*", ’*’) re- turns the
**array ["hello", "fellow", "students"].:wq
 */

#include "libft.h"

char    **ft_strsplit(char const *s, char c)
{
    char    **take;
    int     r1;
    int     r2;
    int     r3;
    int     r4;

    if (!s)
        return (NULL);
    take = (char **)ft_memalloc((ft_countwords(s, c) + 1) * sizeof(char *));
    if (!take)
        return (NULL);
    r1 = 0;
    r2 = 0;
    r3 = 0;
    r4 = 0;
    while (s[r1++])
    {
        if (r2 && s[r1] == c)
            take[r3++] = ft_strsub(s, r4, r1 - r4);
        if (!r2 && s[r1] != c)
            r4 = r3;
        r2 = (s[r1] == c) ? 0 : 1;
    }
    if (r2)
        take[r1] = ft_strsub(s, r4, r1 - r4);
    return (take);
}
