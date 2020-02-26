
#include "fillit.h"

int	block_is_edge(t_vector block, t_piece tet)
{
	if (block_touches(block, tet) == 1)
		return (1);
	return (0);
}
