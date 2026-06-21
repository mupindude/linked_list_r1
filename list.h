#ifndef LIST_H
#define LIST_H

typedef struct s_list
{
	struct s_list *next;
	void *data;
} 	t_list;

#include <stdlib.h>

t_list *create_node(void *data);
void add_front(t_list **head, t_list *new_node);
t_list *find_last(t_list *head);
void add_back(t_list **head, t_list *new_node);
int list_size(t_list *head);
void del_one(t_list *node, void (*del)(void *));
void del_front(t_list **head, void (*del)(void *));
void free_list(t_list **head, void (*del)(void *));
void for_each(t_list *head, void (*f) (void *));
#endif