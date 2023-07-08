/**
 * clear_bit - Sets the value of a bit to 1 at a given index
 * @n: Decimal to set bit
 * @index: Position to set bit
 *
 * Return: 1 on success. -1 on Failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        unsigned long int m = *n;
        unsigned int ncount = 0;
        unsigned long int mask = 1;

        if (index >= 64)
                return (-1);

        while (m > 0)
        {
                m >>= 1;
                ncount++;
        }

        if (index >= ncount)
                return (1);

        mask = mask << index;
        *n &= ~mask;
        return (1);
}
