

#include "libft.h"

#include <string.h>
#include <stdlib.h>

int main () 
{
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(5);
   strcpy(str, "Hello");
   printf("String = %s,  Address = %u\n", str, str);
   free(str);
   str = (char *) ft_memalloc(5);
   ft_strcpy(str, "Hello");
   printf("String = %s, Address = %u\n", str, str);
   free(str);
   return (0);
}
