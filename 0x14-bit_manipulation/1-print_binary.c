#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 * @n: integer number to be used
 *
 * Retuen: void
 *
 * (c) Cypherson
 *
 */

void print_binary(unsigned long int n)
{
	if (n >= 2)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
