#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: Source string
 * @c: Character to find
 *
 * Return: Pointer to the location of c in s or null
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *p = NULL;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			p = s + i;
			break;
		}
		i++;
	}

	return (p);
}
