#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: space between numbers
 * @n: the number of integers passed to the function
 * @...: number of variable integers to be passed
 *
 * Return: void
 *
 * (c) Cypherson
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, unsigned int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(nums);
	printf("\n");
}
