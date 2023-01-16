#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the variable in struct dog
 * @d - pointer to struct dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	char *name;
	float age;
	char *owner;

	if (d)
	{
		name = d->name;
		age = d->age;
		owner = d->owner;

		if (name == NULL)
			printf("%s", "Name: nil");
		else
			printf("Name: %s", name);

		if (age == NULL)
			printf("%s", "Age: nil");
		else
			printf("Age: %f", age);

		if (owner == NULL)
			printf("%s", "Owner: nil");
		else
			printf("Owner: %s", owner);
	}
}
