
#include "fillit.h"

int	count_pieces(t_set *lst)
{
	int		i;
	t_set	*save;

	i = 0;
	save = lst;
	while (save)
	{
		i++;
		save = save->next;
	}
	return (i);
}
