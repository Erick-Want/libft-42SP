#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	while(size > i + 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if(size > 0)
		dest[i] = '\0';
	while(src[count] != '\0')
		count++;
	return(count);
}
