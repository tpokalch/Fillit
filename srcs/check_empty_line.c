
#include "fillit.h"

void	check_empty_line(char **line, t_piece *piece)
{
	if (ft_strlen(*line))
		piece->coords[0] = create_vector_from_coords(-2, -2);
	ft_strdel(line);
}
