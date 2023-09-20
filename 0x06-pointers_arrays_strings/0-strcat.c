#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates string in src to dest
 * @dest: the dest string
 * @src: the src string
 *
 * Return: Void
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
