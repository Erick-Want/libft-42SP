#include libft.h

void ft_bzero(void *s, size_t n)
{
	size_t i;
	char *s1;

	i = 0;
	s1 = s;
	while(n > i)
	{
		s1[i] = '\0';
		i++;
	}
}
