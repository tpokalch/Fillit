
#include "fillit.h"

t_set		*final_action(t_set **head, t_set **iter)
{
	if (*iter != *head)
	{
		(*iter)->prev->next = NULL;
		free(*iter);
		return (*head);
	}
	return (clear_and_return(head));
}
