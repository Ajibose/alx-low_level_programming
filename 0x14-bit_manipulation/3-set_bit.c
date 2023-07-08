#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Decimal to set bit
 * @index: Position to set bit
 *
 * Return: n whosebit is set to 1 at index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int mask = 1;

	if (index >= 64)
		return (-1);

	mask = mask << index;
	*n |= mask;
	return (1);
}
