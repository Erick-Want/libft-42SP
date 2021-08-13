/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermatheu <ermatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:01:08 by ermatheu          #+#    #+#             */
/*   Updated: 2021/08/12 21:08:22 by ermatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// void	ft_putnbr_fd(int n, int fd)
// {
// 	char	*s;
// 	int		i;

// 	i = 0;
// 	if (n < 0)
// 	{
// 		n = n * (-1);
// 		write(fd, "-", 1);
// 	}
// 	while (n != 0)
// 	{
// 		*s = n % 10 + 48;
// 		n = n / 10;
// 		s++;
// 		i++;
// 	}
// 	*s = '\0';
// 	while (i >= 0)
// 	{
// 		write(fd, &s, 1);
// 		s--;
// 		i--;
// 	}
// }

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		write(fd,"-", 1);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}
