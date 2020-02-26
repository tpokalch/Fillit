
#include "fillit.h"

t_set	*clear_and_return(t_set **head)
{
	delete_list(head);
	return (NULL);
}
