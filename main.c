

#include "libft.h"

#include <string.h>

int main () {
   char src[50] = "dabcdefghij";
   const char ch = 'd';
   char ret;

   ret = ft_memchr(src, ch, 50);
   printf("|%s|\n",ret);
   return(0);
}
