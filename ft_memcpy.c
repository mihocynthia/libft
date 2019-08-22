/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 11:45:42 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/22 16:13:07 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

void *ft_memcpy(unsigned char *dst, unsigned char *src, size_t n)
{
    size_t i;
    i = 0;

    if (n = 0 || src[i] = dst[i])
        return (dst[i]);
    
    while (n > i)  
    {
        src[i] = dst[i];
        i++;
    }
    src[i] = dst[i];     
    return (ft_memmove);
}
