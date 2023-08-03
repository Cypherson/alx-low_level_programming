#include "main.h"

/**
 * is_prime - checks if a number is divisible
 * @n: number to check
 * @c: checker
 *
 * Return: 0 if num is divisible or otherwise 1.
 *
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number -  returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number
 *
 * Return: 1 if n is prime otherwise 0
 *
 * (c) Cypherson
 *
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
