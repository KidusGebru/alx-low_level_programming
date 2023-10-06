#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a pointer to new memory space
 * @ptr: Old memory space pointer
 * @old_size: Size of the old memory space
 * @new_size: Size of the new memory space
 *
 * Return: Pointer to new memory space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *cptr = (char *) ptr;
	unsigned int i = 0, min = new_size;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new = malloc(new_size);
		if (new == NULL)
			return (NULL);
		return (new);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
		min = old_size;

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);

	for (i = 0; i < min; i++)
		new[i] = cptr[i];
	free(ptr);
	return (new);
}
