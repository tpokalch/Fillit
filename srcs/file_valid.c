
#include "fillit.h"

int	file_valid(int fd, t_set **lst)
{
	if ((*lst = create_list(fd)))
	{
		if ((count_pieces(*lst)) > 26)
		{
			delete_list(lst);
			return (0);
		}
		return (1);
	}
	return (0);
}
