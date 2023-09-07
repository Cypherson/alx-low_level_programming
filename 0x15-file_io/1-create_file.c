#include "main.h"

/**
 * create_file -  a function that creates a file.
 * @filename: name of file to create
 * @text_content: the content to be written into the new file
 *
 * Return: 1 on success, -1 on failure.
 *
 *
 * (c) Cypherson
 *
 */

int create_file(const char *filename, char *text_content)
{
	int new_file;
	int letters_num;
	int i;

	if (!filename)
		return (-1);

	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (new_file == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (letters_num = 0; text_content[letters_num]; ++letters_num)
		;

	i = write(new_file, text_content, letters_num);

	if (i == -1)
		return (-1);

	close(new_file);

	return (1);
}
