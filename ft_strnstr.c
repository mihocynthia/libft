/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:27:55 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/28 18:24:36 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-terminated string 
* needle in the string haystack, where not more than len characters are searched.  
* Characters that appear after a `\0' character are not searched.  Since the strnstr()
* function is a FreeBSD specific API, it should only be used when portability is not a 
* concern.
 */

#include "libft.h"

// int		ft_strncmp(const char *s1, char *s2, size_t len)
// {
// 	int	i;
// 	unsigned char *sn1;
// 	unsigned char *sn2;

// 	sn1 = (unsigned char *)s1;
// 	sn2 = (unsigned char *)s2;
// 	i = 0;
// 	while (sn1[i] && sn1[i] == sn2[i] && --len)
// 		i++;
// 	return (sn1[i] - sn2[i]);
// }


char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    int needle_len; 
    char *haystack;
    char *needle;

    haystack = (char *)big;
    needle = (char *)little;
    needle_len = ft_strlen(little);
    // check if little is empty string
    if (!needle || !*needle)
        return haystack;
    while (*haystack != '\0' && len--)
    {
        if (len < needle_len)
            break;
        if (ft_strncmp(haystack, needle, needle_len) == 0)
            return (haystack);
        else
            haystack++;
    }
    return (NULL);
}
