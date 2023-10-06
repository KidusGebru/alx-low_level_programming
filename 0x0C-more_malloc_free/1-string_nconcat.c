#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates all chars from s1 and n chars from s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of chars to concatenate from s2
 *
 * Return: Pointer in memory to concatenated string
 */

char  *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int size, j = 0, i = 0;

	while (s1[i] != '\0')
		i++;
	size = i + n + 1;
	res = malloc(sizeof(*res) * size);
	if (res == NULL)
		return (NULL);

	i = 0;
	for (i = 0; i < size - 1; i++)
	{
		if (i < size - n - 1)
			res[i] = s1[i];
		else
		{
			res[i] = s2[j];
			j++;
		}
	}
	res[i] = '\0';
	return (res);
}
