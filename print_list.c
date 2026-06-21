#include "list.h"
#include <unistd.h>

void print_list(t_list *head)
{
	if (!head)
		return ;
	int i = 0;
	while(head->next)
	{
		write(1, &head[i], 1);
		i++;
		head = head->next;
	}
}