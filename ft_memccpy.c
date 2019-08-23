/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 17:01:03 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/23 12:03:05 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

void *ft_memccpy(unsigned char *dst, unsigned char *src, int c, size_t n)
{
    char *buff;
    unsigned char c;
    int i;

    i = 0;
    while (n-- && i++)
    {
        //buff = malloc(sizeof(* char) * n);
        dst[i] = src[i];
        if (src[i] == c)
        {
            // *str;
            return(dst);
            //src(buff)[i] = dst(buff)[i]    
            //free(dst);
        }   
    }
    return (NULL);
}   