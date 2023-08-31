#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 *
 * Return: 0 if big endian, 1 if little endian
 *
 * (c) Cypherson
 */

int get_endianness(void)
{
	int val = 1;
	char *x = (char *)&val;

	if (*x == 1)
		return (1);

	return (0);
}
