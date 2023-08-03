#include "main.h"

/**
 * count_strlen - Returns the length of a string.
 * @s: the string to be counted
 *
 * Return: length of the string
 *
 */

int count_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += count_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 * If the string is not a palindrome - 0.
 *
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *If the string is not a palindrome - 0
 *
 * (c) Cypherson
 *
 */

int is_palindrome(char *s)
{
	int index = 0;
	int len = count_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}
