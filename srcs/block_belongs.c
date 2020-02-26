
#include "fillit.h"

int	block_belongs(t_vector block, t_piece tet)
{
	return (vectors_equall(block, tet.coords[0]) ||
	vectors_equall(block, tet.coords[1]) ||
	vectors_equall(block, tet.coords[2]) ||
	vectors_equall(block, tet.coords[3]));
}
