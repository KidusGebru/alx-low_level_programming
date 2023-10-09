#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory space of dog struct
 * @d: Dog structure
 *
 * Return: Always void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
