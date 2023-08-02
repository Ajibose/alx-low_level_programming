#include "main.h"

/**
 * get_bit - gets the bit at a given index
 * @n: Decimal to get bit from
 * @index: Position to get bit
 *
 * Return: Bit at position index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int res, mask;

	if (index >= 64)
		return (-1);

	n = n >> index;
	res = n & 1;
	if (res)
		mask = 1;
	else
		mask = 0;
	return (mask);
}
