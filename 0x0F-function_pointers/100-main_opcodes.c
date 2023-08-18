#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count in command line
 * @argv: argument vector in command line
 *
 * Return: Always 0.
 *
 * (c) Cypherson
 */

int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nbytes;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
