#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - selects the correct function to perform
 * based on the operation asked by the user.
 * @s: pointer to char operator.
 *
 * Return: pointer to the function that corresponds to the operator.
 *
 * (c) Cypherson
 *
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int index = 0;

	while (index < 10)
	{
		if (s[0] == ops->op[index])
			break;
		index++;
	}

	return (ops[index / 2].f);
}
