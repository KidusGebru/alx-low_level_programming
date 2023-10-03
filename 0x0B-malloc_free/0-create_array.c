#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates and inits array of chars
 * @size: Size of array
 * @c: Init character
 * Return: Pointer in memory to first element of array
 */

char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int j = 0;

	i = malloc(sizeof(*i) * size);

	if (i == NULL || size <= 0)
	{
		return (NULL);
	}
	else
	{
		while (j < size)
		{
			i[j] = c;
			j++;
		}
		return (i);
	}
}
