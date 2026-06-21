#include "list.h"

void add_back(t_list **head, t_list *new_node)
{
	t_list *last;
	if (!new_node)
		return ;

	if (!*head)
	{
		*head = new_node;
		return ;
	}

	last = find_last(*head);
	last->next = new_node;
}