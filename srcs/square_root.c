
#include "fillit.h"

int	square_root(int n)
{
	int i;

	i = 0;
	while (i * i < n)
		i++;
	return (i - 1);
}
