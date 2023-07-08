#include "main.h"
/**
 * print_binary - Computes the binary value od a decimal using Bit manipulation
 * @n: Decimal to convert
 *
 * Return: Binary value
 */
void print_binary(unsigned long int n)
{
        unsigned long int res = n;
        int bcount = 0, i, bit;

        if (n == 0)
        {
                putchar('0');
                return;
        }

        while (res > 0)
        {
                bcount++;
                res = res >> 1;
        }

        for (i = bcount - 1; i >= 0; i--)
        {
                bit = (n >> i) & 1;
                if (bit == 1)
                        _putchar('1');
                else
                        _putchar('0');
        }
}
