/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyluu <cyluu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 14:27:55 by cyluu             #+#    #+#             */
/*   Updated: 2019/08/27 16:43:47 by cyluu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The strnstr() function locates the first occurrence of the null-terminated string 
* needle in the string haystack, where not more than len characters are searched.  
* Characters that appear after a `\0' character are not searched.  Since the strnstr()
* function is a FreeBSD specific API, it should only be used when portability is not a concern.
 */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t len)
{
	int	i;
	unsigned char *simon1;
	unsigned char *simon2;

	simon1 = (unsigned char *)s1;
	simon2 = (unsigned char *)s2;
	i = 0;
	while (simon1[i] && simon1[i] == simon2[i] && --len)
		i++;
	return (simon1[i] - simon2[i]);
}
#include <stdio.h>

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
/* 
    int i;
    int j;
    i = 0;
    j = 0;
    unsigned char *little_ret;
    unsigned char *big_ret;

    little_ret = (unsigned char *)little;
    big_ret = (unsigned char *)big;
*/
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
        //printf("[%zu] comparing: %s | %s | %d\n", len, haystack, needle, ft_strncmp(haystack, needle, needle_len));
        if (ft_strncmp(haystack, needle, needle_len) == 0)
            return (haystack);
        else
            haystack++;
    }
    return (NULL);
/*

    // char * =  strstr(big_ret[j], small_ret[i])
    while (little_ret[i] != '\0')
    {
        i++;
    }
    while (little_ret[i]  len)
    {
        little_ret[i++]
    }
    
    if (little_ret > big_ret)
    {
        while (len-- > 0)
        {
            little_ret[len] = ((unsigned char *)big[j]);
            return NULL;
        }
    else
        {
        while (big_ret[j)
        {
            j++    
        }
        return ((char *)little);
        }
    }
 */
}

#include <string.h>
int  main(void)
{
    // const char *big = "Foo Bar Baz";
    // const char *small = "Bar";
    // printf("%s\n", ft_strnstr(big, small, 10));
    // printf("%s\n", ft_strnstr(big, "abc", 10));
    // printf("%s\n", ft_strnstr(big, "", 10));
    // printf("%s\n", ft_strnstr("abc", "abc", 10));
    // printf("%s\n", ft_strnstr("abc", "abd", 2));
    // printf("%s\n", ft_strnstr("cccadc", "abc", 5));
    // printf("%s\n", ft_strnstr("cccabc", "abc", 10));

        
    char	*s1 = "MZIRIBMZIRIBMZE123";
    char	*s2 = "MZIRIBMZE";
    size_t	max = strlen(s2);

    char	*i1 = strnstr(s1, s2, max);
    char	*i2 = ft_strnstr(s1, s2, max);
    printf("%p %p\n", i1, i2);


    //printf("%d\n", ft_strncmp("Bar Baz", "Bar", 3));

 
    return (0);
}