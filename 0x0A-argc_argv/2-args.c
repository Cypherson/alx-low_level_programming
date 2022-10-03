#include <stdio.h>

/**
 * main - is a program that prints all arguments it receives.
 * @argc: the argument count
 * @argv: the argument vector
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
