#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*temp2;

	temp = *lst;
	if (!*lst)
		return ;
	while (temp != 0)
	{
		temp2 = temp->next;
		(*del)(temp->content);
		free(temp);
		temp = temp2;
	}
	*lst = NULL;
}
