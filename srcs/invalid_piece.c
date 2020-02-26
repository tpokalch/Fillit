
#include "fillit.h"

t_piece		*invalid_piece(t_piece *curr, char **line)
{
	ft_strdel(line);
	curr->coords[0] = create_vector_from_coords(-2, -2);
	return (curr);
}
