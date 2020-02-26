
#include "fillit.h"

void	delete_list(t_set **head)
{
	t_set	*current;
	t_set	*next;

	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = current->next;
	}
	*head = NULL;
}
