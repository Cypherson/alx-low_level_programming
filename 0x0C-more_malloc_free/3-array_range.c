#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum array element
 * @max: maximum array element
 *
 * Return: the pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 *
 * (c) Cyphesron
 */

int *array_range(int min, int max)
{
	int *ptr;
	int index, size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	for (index = 0; index < size && min <= max; index++, min++)
		*(ptr + index) = min;
	return (ptr);
}
