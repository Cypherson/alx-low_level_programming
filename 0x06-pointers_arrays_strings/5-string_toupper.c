#include "main.h"

/**
 * string_toupper - coverts lower case to upper case letters
 * @n: pointer
 * Return: address to the converted string
 */


char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
