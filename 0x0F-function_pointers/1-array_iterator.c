#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to be used
 *
 * Return: void
 *
 * (c) Cypherson
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int value;

		if (array == NULL || action == NULL)
		{
		return;
		}
		for (value = 0; value < size; value++)
			action(array[value]);
}
