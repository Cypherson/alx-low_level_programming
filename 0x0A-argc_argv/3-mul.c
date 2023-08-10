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
	int num1, num2, Result;

	if (argc <= 2)
	{
		printf("Errorn\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	Result = num1 * num2;

	printf("%d\n", Result);

	return (0);
}
