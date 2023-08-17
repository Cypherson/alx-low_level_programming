#include "variadic_functions.h"
#include "printint.h"
#include "printfloat.h"
#include "printchar.h"
#include "printstring.h"


/**
 * print_all -  a function that prints anything.
 * @format: A string of character representing
 * the argument types
 *
 * Return: void
 *
 * (c) Cpherson
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *separator = "";
	func_printer funcs[] = {
		{"c", Print_Char},
		{"i", Print_int},
		{"f", print_Float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(funcs[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print_func(ap);
			separator = ", ";
		}
		i++;
	}
	printf("\n");

	va_end(ap);
}
