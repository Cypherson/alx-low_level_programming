#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: pointer to the file containing the letters
 * @letters: the number of letters the function should read and print
 *
 * Return: the actual number of letters it could read and print or
 * if the file cannot be opened or read, return 0 or
 * if filename is NULL return 0 or
 * if write fails or does not write the expected amount of bytes,
 * return 0
 *
 * (c) Cypherson
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t i, read_f;
	char *buf;

	if (!filename)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		return (0);
	}

	i = read(file, buf, letters);
	read_f = write(STDOUT_FILENO, buf, i);

	close(file);

	free(buf);

	return (read_f);
}

