#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	else
	{
		(s[0]);
		_puts_recursion(s + 1);
	}
}
