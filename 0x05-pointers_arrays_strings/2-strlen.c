#include "main.h"

/**
 * _strlen - Returns length of a strings
 * @str: the string
 *
 * Return: Void
 */

int _strlen(char *s)
{
	int i = 1;

	while (*(s + i) != '\0')
		i++;
	return (i);

}
