#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	size_t	i;
	t_list	*temp;

	temp = *lst;
	i = 1;
	while (temp->next != 0)
	{
		temp = temp->next;
		i++;
	}
	temp->next = new;
	lst[i] = new;
}
