#include "list.h"

int list_size(t_list *head)
{
	int size = 0;
	while(head)
	{
		size++;
		head = head->next;
	}
	return (size);
}