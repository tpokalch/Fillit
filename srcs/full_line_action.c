
#include "fillit.h"

void	full_line_action(t_vector *iters, char *line,
							int *points, t_piece *curr)
{
	static t_vector first_point;

	while (++iters->y < 4)
		if (line[iters->y] == '#')
			vector_from_piece(create_vector_from_coords(iters->y,
						iters->x), &first_point, points, curr);
	ft_strdel(&line);
}
