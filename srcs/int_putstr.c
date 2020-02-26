
#include "fillit.h"

int		int_putstr(char *s, int fd)
{
	int i;

	i = 0;
	close(fd);
	while (*(s + i) != '\0')
	{
		write(1, s + i, 1);
		i++;
	}
	return (0);
}
