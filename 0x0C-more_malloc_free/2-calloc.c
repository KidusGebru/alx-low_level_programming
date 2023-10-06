#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of element sizes
 * @nmemb: Number of elements
 * @size: Size of elements
 *
 * Return: Pointer in memory of array
 */

void  *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb > 0 && size > 0)
	{
		arr = malloc(nmemb * size);
		if (arr == NULL)
			return (NULL);

		for (i = 0; i < (nmemb * size) - 1; i++)
			arr[i] = 0;

		arr[nmemb] = 0;
		return (arr);
	}
	return (NULL);
}
