#include "libft.h"
void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const char *s1;

	i = 0;
	s1 = s;
	while(n > i)
	{
		if (s1[i] == (unsigned char)c)
			return(void *)(s1 + i);
		i++;
	}
	// if (s1[i] == '\0' && c == '\0')
	// 	return((void *)(s1 + i));
	return(NULL);
}
