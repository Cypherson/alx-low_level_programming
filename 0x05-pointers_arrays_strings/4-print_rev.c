#include "main.h"

/**
 * print_rev - this function prints a string is reverse
 * @s: is the input string
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	for (i = i - 1; s[i] != '\0'; i--)
		{
			_putchar(s[i]);
		}
	putchar('\n');
}

