#include <stdio.h>

/**
 * main - Prints the name of the file
 * @argv: array of the arguments passed to the program
 * @argc: length of argv
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	printf("%s\n", __FILE__);
	return(0);
}
