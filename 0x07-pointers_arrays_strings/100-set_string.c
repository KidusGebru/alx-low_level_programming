#include "main.h"

/**
 * set_string - Copies string s to location to
 * @s: String
 * @to: Destination location
 *
 * Return: Always void
 */

void set_string(char **s, char *to)
{
	int i = 0;
	char *s11 = s[0];

	while (*(s11 + i) != '\0')
	{
		*(to + i) = *(s11 + i);
		i++;
	}
}
