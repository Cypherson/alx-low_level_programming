#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - a function that copies the content of a file to another file
*
* @argc: num argument in command line
*
* @argv: string argument vector
*
*
* Return: always 0
*
*
* (c) Cypherson
*
*/


int main(int argc, char *argv[])
{
	int source, dest;
	int val_1 = 1024, val_2 = 0;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	source = open(argv[1], O_RDONLY);
	if (source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(source), exit(99);
	}
	while (val_1 == 1024)
	{
		val_1 = read(source, buf, 1024);
		if (val_1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		val_2 = write(dest, buf, val_1);
		if (val_1 > val_2)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (close(source) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source), exit(100);

	if (close(dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);

	return (0);
}
