/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermatheu <ermatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:12:14 by ermatheu          #+#    #+#             */
/*   Updated: 2021/08/16 14:40:15 by ermatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	size_t	i;
	size_t	i_beggin;
	size_t	i_end;

	if (!s1 || !set)
		return (NULL);
	i_beggin = 0;
	i_end = ft_strlen(s1);
	while (s1[i_beggin] && ft_strchr(set, s1[i_beggin]))
		i_beggin++;
	while (ft_strchr(set, s1[i_end]))
		i_end--;
	if (i_end < i_beggin)
		return (ft_calloc(1, sizeof(char)));
	newstr = malloc(sizeof(char) * (i_end - i_beggin + 2));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i <= i_end - i_beggin)
	{
		newstr[i] = s1[i_beggin + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

// int main()
// {
// 	char	*s;
// 	char	*set;

// 	s = "";
// 	set = " \n\t";
// 	s = ft_strtrim(s, set);
// 	printf("%s", s);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	i_beg;
// 	size_t	i_end;
// 	size_t	i;
// 	char	*newstr;

// 	i_beg = 0;
// 	i_end = ft_strlen(s1);
// 	while (s1[i_beg] && ft_strrchr(set, s1[i_beg]))
// 		i_beg++;
// 	while (*s1 && ft_strrchr(set, s1[i_end]))
// 		i_end++;
// 	if (i_beg > i_end)
// 		return (ft_calloc(1, sizeof(char)));
// 	newstr = malloc(sizeof(char) * (i_end - )
// }
