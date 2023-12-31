#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Prints members of a struct dog
 * @d: Pointer to some struct dog
 *
 * Return: Always void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: %s\n", "(nil)");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
