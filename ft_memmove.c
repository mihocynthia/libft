/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 14:25:49 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/26 23:27:18 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{

    size_t i;
    unsigned char *simon;
    unsigned char *simon2;

    if (len == 0 || dst == src)
        return (dst);
    simon = (unsigned char *)dst;
    simon2 = (unsigned char *)src;
    i = 0;

    if (simon > simon2)
    {
        while (len-- > 0)
        {
            simon[len] = ((unsigned char *)src)[len];
        }
    }
    else
    {
        while (i < len)
        {
            simon[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    
    return (dst);
}


// int     main()
// {
//     char	*src = "this is a good nyancat !\r\n";
//     char	dst1[0xF0];
//     char	dst2[0xF0];
//     int		size = strlen(src);

//     memmove(dst1, src, size);
//     ft_memmove(dst2, src, size);
//     printf("dest1: %s\n", dst1);
//     printf("dest2: %s\n", dst2);

//     return (0);
// }