#include "dog.h"

/**
 * init_dog - Initialize the dog struct
 *
 * @d: pointer to dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: Owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
