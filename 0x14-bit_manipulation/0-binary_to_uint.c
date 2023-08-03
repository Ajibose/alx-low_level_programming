#include "main.h"

/**
 * binary_to_uint - Convert a binary to its decimal form
 * @b: Binary to convert
 * Return: The converted number on sucess or
 * 0 on Failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec = 0, bin;
	const char *n = b;

	if (b == NULL)
		return (0);

	while (*n)
	{
		if (*n != '1' && *n != '0')
			return (0);

		n++;
		i++;
	}

	while (*b)
	{
		bin = (*b - '0') * pows(i - 1);
		dec += bin;
		b++;
		i--;
	}
	return (dec);
}

/**
 * pows - Compute the power of 2 to a number
 * @i: power
 *
 * Return: The result
 */
int pows(int i)
{
	int j = 0, power = 1;

	while (j < i)
	{
		power *= 2;
		j++;
	}
	return (power);
}
