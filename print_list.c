#include "list.h"
#include <unistd.h>

void ft_pustr(char *s)
{
	int i = 0;
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

void print_list(t_list *head)
{
	while (head)
	{
		ft_pustr((char *)head->data);
		if (head->next)
			write(1, "->", 2);
		head = head->next;
	}
	write(1, "-> NULL\n", 8);
}