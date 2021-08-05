/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermatheu <ermatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:01:09 by ermatheu          #+#    #+#             */
/*   Updated: 2021/08/05 17:26:00 by ermatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	unsigned int	len_s;

	i = 0;
	len_s = 0;
	while (s[len_s] != '\0')
		len_s++;
	if (start > len_s)
	{
		sub = (char *)ft_calloc(sizeof(char), 1);
		if (!sub)
			return (NULL);
		return (sub);
	}
	if (len > (len_s - start))
		len = len_s - start;
	sub = malloc(sizeof(char) * len + 1);
	if (sub == NULL || s[i] == '\0')
		return (NULL);
	while (len > i)
		sub[i] = s[start + i++];
	sub[i] = '\0';
	return (sub);
}
