#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters given
 * @... : varaible parameter number to sun up
 *
 * Return: If n == 0, return 0
 *
 *
 * (c) Cyphersom
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	int num;
	unsigned int index;
	va_list sum;

	if (n == 0)
	{
		return (0);
	}
	num = 0;
	va_start(sum, n);
	for (index = 0; index < n; index++)
	{
		num += va_arg(sum, int);
	}
	va_end(sum);
	return (num);
}
