#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: file name pointer
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 *
 * (c) Cypherson
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_name;
	int letters_num;
	int i;

	if (!filename)
		return (-1);

	file_name = open(filename, O_WRONLY | O_APPEND);

	if (file_name == -1)
		return (-1);

	if (text_content)
	{
		for (letters_num = 0; text_content[letters_num]; ++letters_num)
			;

		i = write(file_name, text_content, letters_num);

		if (i == -1)
			return (-1);
	}

	close(file_name);

	return (1);
}
