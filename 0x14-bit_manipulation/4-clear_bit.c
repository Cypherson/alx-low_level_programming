#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: point to bit
 * @index:  is the index, starting from 0 of the bit to set
 *
 *
 * Return: 1 if it worked, or -1 if an error occurred
 *
 *
 * (c) Cypherson
 *
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num;

	if (index >= 64)
	{
		return (-1);
	}

	num = 1 << index;

	if (*n & num)
		*n ^= num;

	return (1);
}
