#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * ...: variable parameter passedto function
 *
 * Return: void
 *
 * (c) Cypherson
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list st;
	char *str;
	unsigned int i;

	va_start(st, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(st, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(st);
}
