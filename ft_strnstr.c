/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermatheu <ermatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:00:41 by ermatheu          #+#    #+#             */
/*   Updated: 2021/08/05 15:02:44 by ermatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	match;

	match = 0;
	i = 0;
	if (len < ft_strlen(little))
		return (NULL);
	while (big[i] != '\0')
	{
		if (len == 0)
			break ;
		len--;
		while (big[i + match] == little[match] && len > match)
			match++;
		i++;
		if (match == ft_strlen(little))
			return ((char *)&big[i - match]);
		match = 0;
	}
	return (NULL);
}

// int main()
// {
// 	char haystack[30] = "aaabcabcd";
// 	char needle[10] = "aab";

// 	ft_strnstr(haystack, needle, 2);
// }
