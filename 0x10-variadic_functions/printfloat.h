#include <stdio.h>

/**
 * print_Foat - print a float
 * @arg: a pointer to the next float argument
 *
 * Return: void
 *
 * (c) Cypherson
 */

void print_Float(va_list arg)
{
	float n = va_arg(arg, double);

	printf("%f", n);
}

