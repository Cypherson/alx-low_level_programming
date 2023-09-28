#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * >>		to flip to get from one number to another.
 * @n: the number to be flipped
 * @m: the number to flip n to
 *
 *
 * Return: number of bits
 *
 *
 * (c) Cypherson
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num_flip = n ^ m, val = 0;

	while (num_flip > 0)
	{
		val += (num_flip & 1);
		num_flip >>= 1;
	}
	return (val);
}
