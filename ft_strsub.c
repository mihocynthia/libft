/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 21:01:09 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/30 21:16:52 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *strr;
    int     line;

    if (!s)
        return (NULL);
    strr = ft_strnew(len);
    if (!strr)
        return (NULL);
    while (line < len)
        strr[line++] = s[start++];
    return (strr);
}