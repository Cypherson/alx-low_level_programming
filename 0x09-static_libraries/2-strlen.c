#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string length to be returned.
 *
 * Return: string length
 *
 * (c) Cypherson.
 *
 */

int _strlen(char *s)
{
	int lngt = 0;

	while (*s++)
	{
		lngt++;
	}

	return (lngt);
}

