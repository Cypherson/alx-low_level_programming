#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: argument count in command line
 * @argv: argument vector in command line
 *
 * Return: Always (0)
 *
 * (c) Cypherson.
 *
 */

int main(int argc, char *argv[])
{
	int cents, change = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		change += 1;
	}
	printf("%d\n", change);
	return (0);
}
