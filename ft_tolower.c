#include libft.h

int ft_tolower(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return(c);
}
