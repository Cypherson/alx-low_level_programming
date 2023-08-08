#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: array width
 * @height: array height
 *
 *
 * Return: NULL If width or height is 0 or negative
 * and NULL on failure
 *
 * (c) Cypherson
 *
 */

int **alloc_grid(int width, int height)
{
	int **opt;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	opt = malloc(sizeof(int *) * height);
	if (opt == NULL)
	{
		free(opt);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		opt[i] = malloc(sizeof(int) * width);
		if (opt[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(opt[i]);
			free(opt);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			opt[i][j] = 0;

	return (opt);
}
