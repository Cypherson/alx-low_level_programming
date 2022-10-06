#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that return pointer to a 2 dimensional array of int.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL if width or height is 0 or negative.
 */

int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	else
	{
		ptr = (int **) malloc(height * sizeof(int *));

			for (j = 0; j <= i; j++)
			{
				free(ptr[j]);
			free(ptr);
			return (NULL);
			}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			ptr[a][b] = 0;
		}
	}
	return (ptr);
}

