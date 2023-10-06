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

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	while (--nmemb > 0)
		arr[nmemb] = 0;

	arr[nmemb] = 0;
	return (arr);
}
