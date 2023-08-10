#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argv: argument vector in command line
 * @argc: argument count in command line.
 *
 * Return: (1) and prints error if command < 2
 * and (0) on success.
 *
 * (c) Cyphersonn
 */

int main(int argc, char *argv[])
{
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
