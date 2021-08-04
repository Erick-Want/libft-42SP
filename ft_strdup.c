#include "libft.h"

char *ft_strdup(const char *s)
{
	size_t len;
	size_t i;
	char *dup;

	i = 0;
	len = 0;
	while(s[len] != '\0')
		len++;
	dup = malloc(len + 1);
	if(dup == 0)
		return(NULL);
	while(len + 1 > i)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}
