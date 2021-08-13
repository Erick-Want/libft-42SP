/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermatheu <ermatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:00:09 by ermatheu          #+#    #+#             */
/*   Updated: 2021/08/12 21:20:09 by ermatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	ssize_t	i;
	char	*str;
	ssize_t	x;

	i = ft_strlen(s1);
	x = ft_strlen(s2);
	str = malloc(sizeof(char) * (i + x + 1));
	if (!str)
		return (NULL);
	i = 0;
	x = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		str[x + i] = s2[x];
		x++;
	}
	str[x + i] = '\0';
	return (str);
}
