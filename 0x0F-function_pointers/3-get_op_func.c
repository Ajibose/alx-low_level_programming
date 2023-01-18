#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform given by s
 * @s: Operation to perform
 *
 * Return: pointer to function needed to perform the operation or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	for (i = 0; i < 5; i++)
		if (*s == *ops[i].op)
			return (ops[i].f);
	return (ops[i].f);
}
