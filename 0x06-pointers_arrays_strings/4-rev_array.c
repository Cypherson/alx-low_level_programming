#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @n: the number of elements of the array
 * @a: variable
 *
 * Return: void
 *
 * (c) Cypherson
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
