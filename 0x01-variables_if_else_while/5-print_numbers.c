#include <stdio.h>

/**
 * main - Print all single digit of base 10
 *
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}

	putchar('\n');
	return (0);
}
