/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 17:40:53 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/28 17:49:50 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Lexicographical comparison between s1 and s2 up to n char- acters or 
* until a ’\0’ is reached. If the 2 strings are identical, the function 
* returns 1, or 0 otherwise.
 */

#include "libft.h"

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
    int i;
    i = 0;
    char *len;
    len = (char)n;
    ft_strcmp(s1, s2);
    while (s1[i] && s2[i] > len < s2[i] && s1[i])
        if (s1[i] == s2[i])
        {
            return (1);
        }
        if (s1[i] == s2[i])
        {
        return (0);
        } 
}