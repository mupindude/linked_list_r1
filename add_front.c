#include "list.h"

void add_front(t_list **head, t_list *new_node)
{
	if (!new_node)
		return ;
	new_node->next = *head;
	*head = new_node;
}