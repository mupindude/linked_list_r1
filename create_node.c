#include "list.h"

t_list *create_node(void *data)
{
	t_list *new_node;
	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->next = NULL;
	return(new_node);
}