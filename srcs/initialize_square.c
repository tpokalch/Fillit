
#include "fillit.h"

char	**initialize_square(int size)
{
	char	**sqr;
	int		j;

	sqr = (char **)malloc(sizeof(char*) * size + 1);
	j = 0;
	while (j < size)
	{
		*(sqr + j) = ft_strnew(size + 1);
		ft_memset((char *)*(sqr + j), (int)('.'), size);
		j++;
	}
	*(sqr + j) = NULL;
	return (sqr);
}
