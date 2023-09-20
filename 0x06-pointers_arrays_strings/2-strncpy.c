#include "main.h"
/**
 *_strncpy - Copies string in src to dest upto n
 *@dest: the dest string
 *@src: the src string
 *@n: Number of characters to copy
 *
 *Return: Void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(src + j) != '\0')
		j++;
	while (i < n)
	{
		if (*(src + i) != '\0' && i < j)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

