#include "list.h"
#include <stdio.h>

static void print_str(void *data)
{
    printf("%s\n", (char *)data);
}

void for_each(t_list *head, void (*f) (void *))
{
	if(!head | !f)
		return ;
	while (head)
	{
		f(head->data);
		head = head->next;
	}
}