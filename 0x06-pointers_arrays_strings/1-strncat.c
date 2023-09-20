#include "main.h"
#include <stdio.h>
/**
 * _strncat - Concatenates string in src to dest upto n
 * @dest: the dest string
 * @src: the src string
 * @n: Number of characters to copy
 *
 * Return: Void
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
