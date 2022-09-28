#include "mainn.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string whose length is to be returned
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
