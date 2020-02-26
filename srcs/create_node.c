
#include "fillit.h"

t_set	*create_node(t_set *prev)
{
	t_set *node;

	MALLCHECK((node = (t_set*)malloc(sizeof(*node))));
	node->next = NULL;
	node->prev = prev;
	return (node);
}
