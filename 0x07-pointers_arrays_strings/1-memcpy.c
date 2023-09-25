#include "main.h"
/**
 * _memcpy - Copies memory from src to dest
 * @dest: Destination memory location
 * @src: Source memory location
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
