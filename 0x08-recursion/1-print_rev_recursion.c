#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: string to be printed in resverse
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
