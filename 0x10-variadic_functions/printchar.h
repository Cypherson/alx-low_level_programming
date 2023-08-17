#include <stdio.h>

/**
 * Print_Char - print a char
 * @arg: a pointer to thenext  character to be printed
 *
 * Return: nothing
 *
 * (c) Cypherson
 */

void Print_Char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}
