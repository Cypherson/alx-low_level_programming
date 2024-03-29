#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *@n: is the number of imputs
 *
 * Return: 0 on success
 *
 */

void print_times_table(int n)
{
	int a, b, d;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
	_putchar(48);
	for (b = 1; b <= n; b++)
	{
		d = a * b;
		_putchar(44);
		_putchar(32);
		if (d <= 9)
		{
		_putchar(32);
		_putchar(32);
		_putchar(d + 48);
		}
		else if (d <= 99)
		{
		_putchar(32);
		_putchar((d / 10) + 48);
		_putchar((d % 10) + 48);
		}
		else
		{
		_putchar(((d / 100) % 10) + 48);
		_putchar(((d / 10) % 10) + 48);
		_putchar((d % 10) + 48);
		}
	}
	_putchar('\n');
	}
	}
}
