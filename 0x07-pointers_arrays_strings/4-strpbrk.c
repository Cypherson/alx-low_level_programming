#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to be assessed
 * @accept: string to assess against
 * Return: NULL if no match or pointer to byte in s that match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int = i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
