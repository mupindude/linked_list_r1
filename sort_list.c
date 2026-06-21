#include "list.h"

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *current;
	int *tmp;

	if(!lst)
		return (NULL);

	current = lst;
	while(current->next)
	{
		if (!cmp(*(int *)current->data, *(int *)current->next->data))
		{
			tmp = current->data;
			current->data = current->next->data;
			current->next->data = tmp;

			current = lst;
		}
		else
			current = current->next;
	}
	return (lst);
}