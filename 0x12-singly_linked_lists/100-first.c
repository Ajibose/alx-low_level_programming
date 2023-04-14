#includ "lists.h"

/**
 * preceedingMain - A function that executes before main
 *
 * Return: void
 */
void __attribute__((constructor)) preceedingMain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
