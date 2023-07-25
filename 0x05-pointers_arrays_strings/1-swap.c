#include "main.h"

/**
 * swap_int - that swaps the values of two integers.
 * @a: first integer
 * @b: second integer
 *
 * Return: always (0)
 *
 * (c) Cypherson
 *
 */

void swap_int(int *a, int *b)
{
	int chn;

	chn = *a;
	*a = *b;
	*b = chn;
}
