

#include "libft.h"

int		main(void)
{
	char	*s1;
	char	*s2;
	int		answer;

	s1 = "destgsdf";
	s2 = "destgsdf";
	answer = ft_strcmp(s1, s2);
	printf("ft_strcmp(s1, s2) %d\n", answer);
	answer = strcmp(s1, s2);
	printf("strcmp(s1, s2) %d\n", answer);
	return (0);
}
