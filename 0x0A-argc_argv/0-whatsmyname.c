#include <stdio.h>

/**
 * main - Print the name o the program
 * @argc: Number of the arguments the program takes
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	while (argv[argc - 1])
	{
		if (argc == 0)
		{
			printf("%s", argv[argc]);
			putchar('\n');
		}
		argc--;
	}
	return (0);
}
