#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to  int
 * @n: is the number of elements of the array to be printed
 *
 * Return: void
 *
 * {c) Cypherson
 *
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
