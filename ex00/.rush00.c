#include <unistd.h>
void rush(int x, int y){int i=-1;int j=-1;
	while (++j < y) // 3
	{
		i = -1;
		while (++i < x) // 5
		{
			// printf("\nj %d\ti %d\n", j, i);
			// sleep(1);
			if ((j == 0 && i == 0) || (j == y - 1 && i == x - 1) || (i == 0 && j == y - 1) || (i == x - 1 && j == 0))
				write(1, "o", 1);
			else if ((j == 0 && x != 0) || j == y - 1)
				write(1, "-", 1);
			else if (i == 0 || i == x - 1)
				write(1, "|", 1);
			else
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
