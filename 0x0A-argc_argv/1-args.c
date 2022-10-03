#include <stdio.h>

/**
 * main - is a program that prints the number of arguments passed into it.
 * @argc: is the argument count
 * @argv: is the argument vector
 * Return: void
 *
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
