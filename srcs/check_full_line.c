
#include "fillit.h"

int			check_full_line(char *str, t_piece *piece)
{
	int i;

	if (ft_strlen(str) != 4)
	{
		piece->coords[0] = create_vector_from_coords(-2, -2);
		return (0);
	}
	i = -1;
	while (str[++i])
		if (!(str[i] == '.' || str[i] == '#'))
		{
			piece->coords[0] = create_vector_from_coords(-2, -2);
			return (0);
		}
	return (1);
}
