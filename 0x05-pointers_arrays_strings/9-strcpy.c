#include "main.h"

/**
 * _strcpy - Copies string in src to dest
 * @dest: the dest string
 * @src: the src string
 *
 * Return: Void
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
