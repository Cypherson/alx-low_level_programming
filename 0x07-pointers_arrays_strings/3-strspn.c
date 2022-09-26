#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: is the string to be searched
 * @accept: is the prefix to be measured
 * Return: Returns the number of bytes which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = o;
	int index;

	while (*s)
	{
		for  (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);

}
