#include <stdio.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: is the argument count
 * @argv: is the argument vector
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		mul = mul * atoi(argv[i]);
	}

	printf("%d\n", mul);

	return (0);
}
