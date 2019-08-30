

#include "libft.h"

char *ft_strncat(char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t j;
    unsigned char *s1_return;
	unsigned char *s2_return;
    
    i = 0;
    j = 0;
	s1_return = (unsigned char *)s1;
	s2_return = (unsigned char *)s2;
    while (s1_return[i] != '\0')
    {
            i++;
    } 
    while (s2_return[j] != '\0' && j < (n - 1))
    {
        s1_return[i++] = s2_return[j++];
    }
    s1_return[i] = s2_return[j];
    
    return ((char *)s1_return);
}    
