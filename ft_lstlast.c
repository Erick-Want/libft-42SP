/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ermatheu <ermatheu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 23:36:32 by ermatheu          #+#    #+#             */
/*   Updated: 2021/08/16 23:39:07 by ermatheu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	size_t	i;
	t_list	*temp;

	temp = lst;
	i = 1;
	while (temp->next != 0)
	{
		temp = temp->next;
		i++;
	}
	return (lst + i);
}
