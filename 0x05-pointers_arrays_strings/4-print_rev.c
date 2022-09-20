#include "main.h"

/**
 * print_rev - this function prints a string is reverse
 * @s: is the input string
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

