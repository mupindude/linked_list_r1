#include "list.h"

static void del_data(void *data)
{
    free(data);
}

void del_one(t_list *node, void (*del)(void *))
{
	if(!node)
		return ;
	if(del)
		del(node->data);
	free(node);
}

