#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by my  alloc_grid function.
 * @grid: memory area  allocated
 * @height: hirght of the array
 *
 * Return: void
 *
 *
 * (c) Cypherson
 *
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; ++index)
		free(grid[index]);
	free(grid);
}
