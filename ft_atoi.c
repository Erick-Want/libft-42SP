#include "libft.h"

int ft_atoi(const char *nptr)
{
	int res;
	int i;
	int is_neg;

	res = 0;
	is_neg = 1;
	i = 0;
	while((nptr[i] >= 9 && nptr[i] <= 13) || (nptr[i] == 32))
		i++;
	if(nptr[i] == '-' || nptr[i] == '+')
	{
		if(nptr[i] == '-')
			is_neg = is_neg * (-1);
		i++;
	}
	while(nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = (res * 10) + nptr[i] - 48;
		i++;
	}
	return(res * is_neg);
}
