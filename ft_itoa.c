#include "libft.h"
#include <stdio.h>

static unsigned int	ft_len_int(unsigned int n)
{
	unsigned int	size;

	size = 0;
	while (n != 0)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	nb;
	unsigned int	i;

	i = ft_len_int(nb);
	nb = n;
	if (n == 0)
	{
		s = ft_calloc(2, sizeof(char));
		s[0] = 48;
		return (s);
	}
	if (n < 0)
	{
		nb = (n * (-1));
		s = malloc(sizeof(char) * i + 2);// -2147483648
		i++;
		s[0] = '-';
	}
	else
		s = malloc(sizeof(char) * i + 1);// 2147483647
	if (s == NULL)
		return (NULL);
	s[--i] = '\0';
	while (nb != 0)
	{
		s[i] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
	return (s);
}

int main()
{
	int i;
	char *s1;

	i = -2147483648;
	s1 = ft_itoa(i);
	printf("%s", s1);
}
