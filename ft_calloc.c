#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	char *alloc;
	size_t full_size;
	size_t i;

	i = 0;
	full_size = nmemb * size;
	alloc = malloc(full_size);
	if(alloc == 0)
		return(NULL);
	while(full_size > i)
	{
		alloc[i] = '\0';
		i++;
	}
	return(alloc);
}
