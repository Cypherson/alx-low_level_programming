#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the number to use factorial on
 * Return: -1 if n < 0, or n! if n > 0
 */

int factorial(int n)
{
	int answer;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
	return (1);

	answer = factorial(n - 1);


	return (n * answer);
}
