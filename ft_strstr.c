/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 00:48:39 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/28 18:26:40 by cyluu            ###   ########.fr       */
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
    char *hay_ret;
   char *need_ret;

    i = 0;
    hay_ret = (char *)haystack;
    need_ret = (char *)needle;

    if (!need_ret || !*need_ret)
        return hay_ret;
    while(hay_ret[i] != '\0')
  {
        if (ft_strcmp(&hay_ret[i], need_ret) == 0)
            return (&hay_ret[i]);
        else
            hay_ret++;
    }
    return (NULL);
}

// #include <string.h>
// int main()
// {
//     char	*s1 = "FF";
// 			char	*s2 = "see FF your FF return FF now FF";

// 			char	*i1 = strstr(s1, s2);
// 			char	*i2 = ft_strstr(s1, s2);
// 			if (i1 == i2)
//                 printf("SUCCESS\n");
//             else
//             {
//                     printf("FAIL\n");
//             }
//             return 0;
            
// }