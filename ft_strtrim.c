/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermatheu <ermatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:12:14 by ermatheu          #+#    #+#             */
/*   Updated: 2021/08/11 15:49:51 by ermatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	i;
	size_t	beg;
	size_t	end;

	i = 0;
	beg = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strrchr(set, s1[beg]))
		beg++;
	while (ft_strrchr(set, s1[end]))
		end--;
	newstr = malloc (sizeof(char) * (end - beg + 2));
	if (newstr == NULL)
		return (NULL);
	while (i <= end - beg)
	{
		newstr[i] = s1[beg + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
