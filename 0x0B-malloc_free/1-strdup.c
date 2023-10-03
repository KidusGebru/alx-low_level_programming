#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Creates copy of a string argument in memory
 * @str: Argument string
 *
 * Return: Pointer to copy in memory
 */

char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	dup = malloc(i * sizeof(char));
	if (dup == NULL)
		return (NULL);

	while (j <= i)
	{
		dup[j] = str[j];
		j++;
	}
	return (dup);
}
