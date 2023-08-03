#include "main.h"

/**
 * find_sqrt - finds the square root of a number
 * @root: the square root of the number
 * @num: the number
 *
 * Return:  -1 if num is even else the square root of num
 */

int find_sqrt(int root, int num)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	else
		return (find_sqrt(root + 1, num));
}

/**
 *  _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 *
 * Return: -1 if n has no square root or
 * the square root of n.
 *
 * (c) Cpherson
 *
 */

int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(rt, n));
}
