
#include "fillit.h"

void	free_square(char **sqr)
{
	int j;

	j = 0;
	while (*(sqr + j))
	{
		free(*(sqr + j));
		j++;
	}
	free(sqr);
}
