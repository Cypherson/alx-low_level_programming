#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer to return
 * @index: the index, starting from 0 of the bit to get.
 *
 *
 * Return: the value of n
 *
 * (c) Cypherson
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int val;

	if (n == 0 && index < 64)
	{
		return (0);
	}

	for (val = 0; val < 64; n >>= 1, ++val)
	{
		if (index == val)
		{
			return (n & 1);
		}
	}

	return (-1);
}
