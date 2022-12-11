#include <stdio.h>

/**
 * main - Prints alphabets in lowercase except q and e
 *
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if ((ch != 'q') && (ch != 'e'))
			putchar(ch);

	putchar(10);
	return (0);
}
