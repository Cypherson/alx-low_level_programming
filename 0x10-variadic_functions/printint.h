#include <stdio.h>

/**
 * Print_int - print an integer
 * @arg: a list of argument pointing
 * to the character to be printed
 *
 * Return: void
 *
 * (c) Cypherson
 *
 */

void Print_int(va_list arg)
{
	int n = va_arg(arg, int);

	printf("%d", n);
}
