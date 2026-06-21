#include "list.h"

void del_front(t_list **head, void (*del)(void *))
{
	t_list *tmp;
	if(!head || !*head)
		return ;
	tmp = *head;
	*head = (*head)->next;
	if(del)
		del(tmp->data);
	free(tmp);
}