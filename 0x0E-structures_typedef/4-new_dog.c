#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog information
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog's owner name
 *
 * Return: Dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
