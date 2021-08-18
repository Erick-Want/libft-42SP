#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!*lst)
		*lst = new;
	else
	{
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new;
	}
}