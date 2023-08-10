#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argv: argument vector (command line)
 * @argc: argument count (command line)
 *
 * Return: Always 0
 *
 * (c) Cypherson
 *
 */

int main(int argc, char *argv[])
{
	int H;

	for (H = 0; argc > H; H++)
		printf("%s\n", argv[H]);
	return (0);
}
