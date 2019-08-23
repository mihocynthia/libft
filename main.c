

#include "libft.h"

#include <string.h>

int main () {
   const char src[50] = "123456789";
   char dest[50];
   ft_strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, 1);
   printf("After memcpy dest = %s\n", dest);
   
   return(0);
}
