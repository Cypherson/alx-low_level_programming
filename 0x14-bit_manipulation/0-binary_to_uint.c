#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 * >>      there is one or more chars in the string b
 * >>      that is not 0 or 1
 *
 *
 * (c) Cypherson
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0, mul = 1;
	int lgt;

	if (b == NULL)
	{
		return (0);
	}

	for (lgt = 0; b[lgt];)
		++lgt;

	for (lgt -= 1; lgt >= 0; --lgt)
	{
		if (b[lgt] != '0' && b[lgt] != '1')
			return (0);

		val += (b[lgt] - '0') * mul;
		mul *= 2;
	}

	return (val);
}

