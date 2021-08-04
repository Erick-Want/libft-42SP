#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	const unsigned char *s11;
	const unsigned char *s22;

	i = 0;
	s11 = s1;
	s22 = s2;
	while(n > i)
	{
		if(s11[i] != s22[i])
			return(s11[i] - s22[i]);
		i++;
	}
	return(0);
}
