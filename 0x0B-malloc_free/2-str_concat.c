#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: A pointer to location in memory of concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0, lenres = 0;
	char *res;

	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
			len2++;
	}

	lenres = len1 + len2;
	if (lenres == 0)
		res = malloc(sizeof(char));
	else
		res = malloc(lenres * sizeof(char) - 1);

	if (res == NULL)
		return (NULL);

	while (i < len1 && len1 > 0)
	{
		res[i] = s1[i];
		i++;
	}

	while (i < lenres && len2 > 0)
	{
		res[i] = s2[i - len1];
		i++;
	}
	res[i] = '\0';
	return (res);
}

