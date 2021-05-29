#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return  ;
	}
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	(*lst)->next = new;
}
