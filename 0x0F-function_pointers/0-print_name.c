#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name -  prints a name.
 * @name: pointer to name
 * @f: pointer to function
 *
 * Return: void
 *
 * (c) Cypherson
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
