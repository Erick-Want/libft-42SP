/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermatheu <ermatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:35:59 by ermatheu          #+#    #+#             */
/*   Updated: 2021/08/16 13:13:25 by ermatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static unsigned int	ft_len_int(int n)
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

char *copy(unsigned int nb, size_t i, char *s)
{
	s[i] = '\0';
	while (nb != 0)
	{
		s[i] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
	return (s);
}

char	*is_zero(int n)
{
	char	*s;
	int		i;

	i = n;
	s = malloc(sizeof(char) * 2);
	if (!s)
		return (NULL);
	s[0] = 48;
	s[1] = 0;
	return (s);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	nb;
	size_t			i;

	i = ft_len_int(n);
	nb = n;
	if (n == 0)
		return (is_zero(n));
	if (n < 0)
	{
		s = malloc(sizeof(char) * i + 2);// -2147483648\0
		if (!s)
			return (NULL);
		i++;
		s[0] = '-';
	}
	else
	{
		s = malloc(sizeof(char) * i + 1);// 2147483647
		if (s == NULL)
			return (NULL);
	}
	return (copy(nb, i, s));
}

// int main()
// {
// 	int i;
// 	char *s1;

// 	i = -2147483648;
// 	s1 = ft_itoa(i);
// 	printf("%s", s1);
// }
