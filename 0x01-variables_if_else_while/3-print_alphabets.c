#include <stdio.h>

/**
 * main - Prints alphabets in lowercase and uppercase
 *
 * Return: 0
 */

int main(void)
{
	char upper_ch, lower_ch;

	for (lower_ch = 'a'; lower_ch <= 'z'; lower_ch++)
	{
		putchar(lower_ch);
	}
	for (upper_ch = 'A'; upper_ch <= 'Z'; upper_ch++)
	{
		putchar(upper_ch);
	}

	putchar(10);
	return (0);
}
