#include "main.h"

/**
 * _strlen - Returns length of a strings
 * @s: the string
 *
 * Return: Void
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);

}
