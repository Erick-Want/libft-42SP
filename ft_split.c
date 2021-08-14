/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermatheu <ermatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:11:43 by ermatheu          #+#    #+#             */
/*   Updated: 2021/08/14 14:31:47 by ermatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// char *ft_split(char const *s, char c)
// {
// 	int	i;
// 	int	x;
// 	int	y;
// 	char	*s1;
// 	char	*s2;

// 	i = 0;
// 	x = 0;
// 	y = 0;
// 	while (s[y] == c)
// 		y++;
// 	while (s[i + y] != c && s[i + y] != '\0')//s = "-erick--matheus"
// 		i++;
// 	s1 = malloc(sizeof(char) * i + 1);
// 	if (!s1)
// 		return (NULL);
// 	s1[i] = '\0';
// 	while (--i >= 0)
// 		s1[i] = s[i + y];
// 	y = y + ft_strlen(s1);
// 	while (s[y] == c)
// 		y++;
// 	while (s[x + y] != c && s[x + y] != '\0')
// 		x++;
// 	s2 = malloc(sizeof(char) * x + 1);
// 	if (!s2)
// 		return (NULL);
// 	s2[x] = '\0';
// 	while (--x >= 0)
// 		s2[x] = s[x + y];
// 	return (s2);
// }

// int main()
// {
// 	char	*s;
// 	char	c;

// 	s = "erick-matheus";
// 	c = '-';
// 	printf("%s", ft_split(s, c));
// }
//primeiro passo: contar quantas palavras tem???
// ---- aloca a matrix com qtd de palavras mais nulo
//segundo passo: ir na primeira posição e contar quantas letras tem a primeira palavra e copiar a palavra
//terceiro passo: setar a ultima posição da matrix como nulo

static int	count_words(const char *s, char c)
{
	int	y;
	int	i;

	y = 0;
	i = 0;
	while (s[y] != '\0')
	{
		if (s[y] != c)
		{
			i++;
			while (s[y] != c && s[y] != '\0')
				y++;
		}
		else
			y++;
	}
	return (i);
}

static int	count_letter(const char *s, char c)
{
	int	y;

	y = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		y++;
	}
	return (y);
}

static void	copy_string(char **matrix, const char *s, char c)
{
	size_t	y;
	size_t	x;

	x = 0;
	y = 0;
	while (*s != '\0')
	{
		y = 0;
		if (*s != c)
		{
			while (*s != c && *s != '\0')
			{
				matrix[x][y] = *s;
				s++;
				y++;
			}
			x++;
		}
		else
			s++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		x;
	int		y;
	char	**matrix;

	i = count_words(s, c);
	x = 0;
	y = 0;
	matrix = malloc(sizeof(char *) * i + 1);
	matrix[i] = 0;
	while (s[y] != '\0')
	{
		if (s[y] != c)
		{
			matrix[x++] = malloc(sizeof(char) * count_letter(&s[y], c) + 1);
			y = y + count_letter(&s[y], c);
		}
		else
			y++;
	}
	copy_string(matrix, s, c);
	return (matrix);
}

// int main()
// {
// 	char	*s;
// 	char	**matrix;
// 	char	c;

// 	s = "      split       this for   me  !       ";
// 	c = ' ';
// 	matrix = ft_split(s, c);
// 	while (*matrix)
// 	{
// 		printf("%s ", *matrix);
// 		matrix++;
// 	}
// }
