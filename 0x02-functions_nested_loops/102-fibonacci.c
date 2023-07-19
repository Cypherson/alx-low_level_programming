#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: (0)
 *
 */

int main(void)
{
	int fib;
	unsigned long n1 = 0, n2 = 1, n3;

	for (fib = 0; fib < 50; fib++)
	{
		n3 = n1 + n2;
		printf("%lu", n3);

		n1 = n2;
		n2 = n3;

		if (fib == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}

	}
	return (0);
}
