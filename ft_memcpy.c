#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *dest1;
	const unsigned char *src1;

	i = 0;
	dest1 = dest;
	src1 = src;
	while(n > i)
	{
		dest1[i] = src1[i];
		i++;
	}
	return((void *)dest1);
}
