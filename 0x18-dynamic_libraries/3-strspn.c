#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: is the string to be searched
 * @accept: is the prefix to be measured
 * Return: Returns the number of bytes which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
