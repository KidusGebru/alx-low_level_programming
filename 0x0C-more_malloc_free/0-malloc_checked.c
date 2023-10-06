#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memorys
 * @b: Size of memory spacey
 * Return: Pointer in memory to first element
 */

void  *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);
	return (i);
}
