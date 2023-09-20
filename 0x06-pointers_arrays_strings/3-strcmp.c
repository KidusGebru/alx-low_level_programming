#include "main.h"
/**
 * _strcmp - Compares string s1 and s2
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Void
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		diff = *(s1 + i) - *(s2 + i);
		if (diff != 0)
			break;
		i++;
	}
	return (diff);
}


