#include "main.h"

/**
 * set_string - sets the value of a pointer to char
 * @s: pointer to set
 * @to: string to change pointer to
 *
 * Return: nothing
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
