#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: pointer to array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: If no element matches, return -1
 * or      If size <= 0, return -1
 * or	   index of the first element for which
 * >>	   the cmp function does not return 0
 *
 * (c) Cypherson
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
