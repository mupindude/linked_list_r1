#include "list.h"

void free_list(t_list **head, void (*del)(void *))
{	t_list *tmp;
	if(!head || !*head)
		return ;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;

		if(del)
			del(tmp->data);
		free(tmp);
	}
}