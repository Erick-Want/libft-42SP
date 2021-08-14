/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermatheu <ermatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:59:28 by ermatheu          #+#    #+#             */
/*   Updated: 2021/08/12 21:26:10 by ermatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest1;
	const unsigned char	*src1;

	i = 0;
	if (!src)
		return (NULL);
	dest1 = dest;
	src1 = src;
	if (src1 < dest1)
	{
		while (n > 0)
		{
			dest1[n - 1] = src1[n - 1];
			n--;
		}
	}
	else
	{
		while (n > i)
		{
			dest1[i] = src1[i];
			i++;
		}
	}
	return ((void *)dest1);
}
