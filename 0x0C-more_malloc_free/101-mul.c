#include "str.h"
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: input pointer that represents memory block
 * to fill
 * @b: characters to set
 * @n: number of bytes to set
 *
 * Return: pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory
 * for an array using memset
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer to new allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

/**
 * err_exit - prints error with _putchar
 * and exits with 98
 *
 * Return: Error 98 and exit(98)
*/

int err_exit(void)
{
	char *er;
	int i;

	er = "Error";
	for (i = 0; er[i] != '\0'; i++)
		_putchar(er[i]);
	_putchar('\n');
	exit(98);
}

/**
 * check_number - checks if string has only numbers
 * @str: string to check
 *
 * Return: 0 is true 1 if false
 */

int check_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (1);
		str++;
	}
	return (0);
}

/**
 * mul - initialize array with 0 byte
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
*/

void mul(char *s1, char *s2)
{
	int i, l1, l2, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	l1 = _length(s1);
	l2 = _length(s2);
	tmp = l2;
	total_l = l1 + l2;
	ptr = _calloc(sizeof(int), total_l);
	temp = ptr;

	for (l1--; l1 >= 0; l1--)
	{
		f_digit = s1[l1] - '0';
		res = 0;
		l2 = tmp;
		for (l2--; l2 >= 0; l2--)
		{
			s_digit = s2[l2] - '0';
			res += ptr[l2 + l1 + 1] + (f_digit * s_digit);
			ptr[l1 + l2 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[l1 + l2 + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}


/**
 * main - Entry point
 *
 * Description: a program that multiplies
 * two positive numbers
 * @argc: argument count
 * @argv: arguments vector
 *
 * Return: 0 if success and 98 if failed
 *
 * (c) Cypherson
*/

int main(int argc, char *argv[])
{
	char *num1 = argv[1];
	char *num2 = argv[2];

	if (argc != 3 || check_number(num1) || check_number(num2))
		err_exit();

	if (*num1 == '0' || *num2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		mul(num1, num2);
	return (0);
}
