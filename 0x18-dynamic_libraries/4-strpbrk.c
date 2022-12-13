#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string to be assessed
 * @accept: string to assess against
 *
 * Return: NULL if no match or pointer to byte in s that match
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
			else
				return ('\0');
			b++;
		}

		a++;
	}
}
