#include <stdio.h>

/**
 * array_iterator - a function that executes a function
 * @array: is the array of elements
 * @size: is the size of elements
 * @action: pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0; && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}

}
