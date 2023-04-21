#include "3-calc.h"

/**
 * op_add - Add two numbers together
 * @a: First number
 * @b: Second number
 *
 * Return: integer
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: Difference of numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two number
 * @a: First number
 * @b: Second number
 *
 * Return: Product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two number
 * @a: First number
 * @b: Second number
 *
 * Return: Result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives the remainder of an integer after division
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
