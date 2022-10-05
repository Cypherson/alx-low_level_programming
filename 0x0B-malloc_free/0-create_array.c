#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars.
 * @size: is the size of the array
 * @c: is the char to initialise with the array
 *
 * Return: void if fail or pointer to arrays if success.
 *
 */

char *create_array(unsigned int size, char c)
{
	char arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
