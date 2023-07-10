#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int 
**alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	a = 0;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);


grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	while (a < height)
	{
		grid[a] = malloc(width * sizeof(**grid));
		if (grid[a] == NULL)
		{
			a--;
			while (a >= 0)
			{
				free(grid[a]);
				a--;
			}
			free(grid);
			return (NULL);
		}
		b = 0;
		while (b < width)
		{
			grid[a][b] = 0;
			b++;
		}
		a++;
	}
	a = 0;
	return (grid);
}
