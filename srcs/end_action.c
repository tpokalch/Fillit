
#include "fillit.h"

int			end_action(int ret, int *x)
{
	if (ret)
		(*x)++;
	if (ret)
		return (1);
	return (0);
}
