#include "list.h"

t_list *find_last(t_list *head)
{
	t_list *current;
	if (!head)
		return (NULL);
	current = head;
	while(current->next)
		current = current->next;
	return (current);
}