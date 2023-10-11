#include <string.h>
#include "3-calc.h"

/**
 * get_op_func - Returns pointer to appropriate function based on operator
 * @s: Operator string
 *
 * Return: Function pointer
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}

	return (ops[i].f);
}
