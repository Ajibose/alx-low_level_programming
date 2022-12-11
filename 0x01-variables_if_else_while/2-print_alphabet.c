#include <stdio.h>

/**
 * main - Prints alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	ch  = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar(10);
	return (0);
}
