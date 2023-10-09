#include "dog.h"
/**
 * init_dog - Initializes a variables of type struct dog
 * @d: Pointer to the struct
 * @name: Name string to be assigned to dog
 * @age: Age float to be assigned to dog
 * @owner: Ownder name string to be assigned to dog
 *
 * Return: Always void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
