/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 00:48:39 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/28 16:54:24 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)

/*
* function locates the first occurrence of the null-terminated 
* string needle in the null-terminated string haystack.
* return values 
* If needle is an empty string, haystack is returned; if needle 
* occurs nowhere in haystack, NULL is returned; otherwise a pointer 
* to the first character of the first occurrence of needle is returned.
*/
{
    int i;
    i = 0;

    const char *hay_ret;
    const char *need_ret;
    char *check; 
    hay_ret = (const char *)haystack;
    need_ret = (const char *)needle;

    while(hay_ret[i] != '\0')
    {
        i++
    }

    if (!needle || !*needle)
    {
        return haystack
    }
    // check = (hay_ret, need_ret)
    //return ((char *)hay_ret)
}