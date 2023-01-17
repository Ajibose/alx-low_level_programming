#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates new dog
 *
 * @name: Name of dog
 * @owner: Owner of dog
 * @age: Age of dog
 *
 * Return: Null or pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_new;
	char *d_name, *d_owner;

	dog_new = malloc(sizeof(struct dog));
	if (dog_new == NULL)
		return (NULL);

	d_name = malloc(sizeof(name));
	if (d_name == NULL)
	{
		free(dog_new);
		return (NULL);
	}
	_strcpy(d_name, name);
	dog_new->name = d_name;

	d_owner = malloc(sizeof(owner));
	if (d_owner == NULL)
	{
		free(dog_new);
		return (NULL);
	}
	_strcpy(d_owner, owner);
	dog_new->owner = d_owner;
	dog_new->age = age;

	return (dog_new);
}

/**
 * _strcpy - Copies a string
 * @dest: string to be copied to
 * @src: string to copy
 *
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
