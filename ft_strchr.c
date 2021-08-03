#include libft.h

char *ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while(s[i] =! '\0')
	{
		if (s[i] == c)
			return(&s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return(&s[i]);
	return(NULL);
}
{
	size_t i;

	i = 0;
	while(s[i] =! c)
		i++;
	if (s[i] == c)
		return(&s[i]);
	if (s[i] == '\0' && c == '\0')
		return(&s[i]);
	return(NULL);
}
