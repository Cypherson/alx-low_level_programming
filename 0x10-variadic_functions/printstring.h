#include <stdio.h>

/**
 * print_string - prints a string to stdout
 * @arg: pointer to the next string to be printed
 *
 * Return: void
 *
 * (c) Cypherson
 */

void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

