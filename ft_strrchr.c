/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:51:51 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/27 12:08:30 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = 0;
    char *s_ret;
    s_ret = ((char *)s);
    while(s_ret[i])
    {
        i++;
    }
    while (i-- && s_ret[i])
    {
        if(s_ret[i] == c)
            return(&s_ret[i]);
    }
    return (NULL);
}
