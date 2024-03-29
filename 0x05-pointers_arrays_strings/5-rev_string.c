#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string to be reverse
 *
 * Return: void
 *
 * (c) Cypherson
 */

void rev_string(char *s)
{
	int l, i;
	char sw;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; l++)
		;

	/*swap the string by looping to half of the string*/
	for (i = 0; i < l / 2; i++)
	{
		sw = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
		s[l - 1 - i] = sw;
	}

}
