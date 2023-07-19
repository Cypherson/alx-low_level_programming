#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 *  in the Fibonacci sequence followed by a new line.
 *
 *  Return: (0)
 *
 *  (c) Cypherson
 *
 */

int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3;
	float n_sum;

	while (1)
	{
		n3 = n1 + n2;

		if (n3 > 4000000)
		{
			break;
		}

		if ((n3 % 2) == 0)
		{
			n_sum += n3;
		}

		n1 = n2;
		n2 = n3;
	}
	printf("%.0f\n", n_sum);

	return (0);
}
