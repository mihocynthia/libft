/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 03:13:18 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/30 04:31:32 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**Allocates (with malloc(3)) and returns a “fresh” memory area. The memory
**allocated is initialized to 0. If the alloca- tion fails, the function
**returns NULL.
*/

#include "libft.h"

void    *ft_memalloc(size_t size)
{
    char    *memword;
    char    *point;

    memword = (char *)malloc((sizeof(char)* size));
    point = memword;
    if (memword == NULL || point == NULL)
        return (NULL);
    while (memword++, size--)
    {
        *memword = 0;
    }
    return (memword);
}