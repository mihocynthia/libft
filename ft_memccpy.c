/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:01:03 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/26 17:11:52 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    int i;
    const char *src_c;
    char *dst_c;
    
    i = 0;
    src_c = src;
    dst_c = dst;
    while (n-- && src_c[i])
    {
        dst_c[i] = src_c[i];
        if (src_c[i] == c)
            return(dst + (i + 1));
        i++;
    }
    return (NULL);
}

// int main()
// {
//     char src[] = "a";
//     char dst[50] = "zxcvbfghjk";
//     // char *tst = ft_memccpy(dst, src, 'b', 7);
//     char *ans = memccpy(dst, src, 'b', 7);
//     // printf("tst|%s|\n", tst);
//     printf("ans|%s|\n", ans);
// }