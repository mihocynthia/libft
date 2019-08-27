/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:01:03 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/27 11:13:30 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memccpy() function copies bytes from memory s2 into s1, stopping after
** the first occurence of c has been copied, or after n bytes have been copied, 
** which ever comes first. 
*/

#include "libft.h"

#include <string.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char *src_ret;
    unsigned char *dst_ret;
    unsigned char c_ret;
    int i;

    i = -1;
    src_ret = (unsigned char *)src;
    dst_ret = (unsigned char *)dst;
    c_ret = (unsigned char)c;

    while (n--)
    {
        i++;
        dst_ret[i] = c_ret;
        if (src_ret[i] == c_ret)
        {
            return((void *)dst_ret);
        }
    return ((void *)dst_ret);
    }
}
