#include "libft.h"

int ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return(c);
}
