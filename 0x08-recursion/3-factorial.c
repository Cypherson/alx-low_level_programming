#include "main.h"

/**
 * factorial -  returns the factorial of a given number.
 * @n: number used
 *
 * Return: -1 if n < 0
 * 1 if n == 1
 * else factorial of n
 *
 * (c) Cypherson
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
