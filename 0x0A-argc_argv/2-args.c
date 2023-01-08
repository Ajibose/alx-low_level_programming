#include "main.h"

/**
 * main - Prints the argument passed to it
 * @argc: no of arguments
 * @argv: array of pointers to the argument
 *
 * Return: 0 on succes
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
